    #include <iostream> // cout, cerr
    #include <fstream>
    #include <vector>
    #include <string>
    using std::vector; using std::string; using std::cout; using std::cerr;

    int zaehleWoerter(const string& filename) { // R?ckgabe kleiner 0 bei Fehler
        std::ifstream file{filename};
        if(!file) {          // Gab es einen Fehler beim ?ffnen der Datei?
            cerr << "Fehler beim Oeffnen von " << filename << "\n";
            return -1;       // dem Aufrufer einen Fehler mittels besonderem Wert anzeigen
        }
        int count = 0;
        string wort;
        while(!file.eof()) { // noch nicht am Ende?
            file >> wort;
            ++count;
        }
        return count-1;      // @MINUS@1: am EOF wurde noch ein Wort gelesen
    }
    bool process(const vector<string>& args) { // R?ckgabe true bei alles okay
        if(args.size() == 0) {  // erwarten Parameter
            cerr << "Kommandozeilenargument fehlt\n";
            return false;       // mittels R?ckgabe einen Fehler mittteilen
        } else {
            bool result = true; // f?rs Endergebnis
            for(const string filename : args) {
                cout << filename << ": ";
                int count = zaehleWoerter(filename);
                if(count < 0) { // besondere R?ckgabe zeigt Fehler an
                    cout << "Fehler!\n";
                    result = false;              // mindestens ein Fehler
                } else {
                    cout << count << "\n";       // normales Ergebnis ausgeben
                }
            }
            return result;      // Gesamtergebnis zur?ckgeben
        }
    }

    int main(int argc, const char* argv[]) {
        bool result = process(  // R?ckgabewert enth?lt Fehlerindikator
            {argv+1, argv+argc} ); // const char*[] nach vector<string>
        if(result) {            // R?ckgabewert auswerten
            return 0;
        } else {
            cerr << "Es trat ein Fehler auf.\n";
            return 1;           // au?en Fehler anzeigen
        }
    }

