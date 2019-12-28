    #include <fstream>
    #include <iostream>
    int main() {
        std::ofstream file01("data.db");
        if( file01.fail() ) {
            std::cout << "Konnte data.db nicht ?ffnen\n";
        } else {
            std::cout << "ok.\n";
            //= ok.
        }
        file01 << "Text f?r die Datei\n";
        if( file01.is_open()) {
            file01.close();
        }
        // Automatisch:
        std::ofstream file01("data001.db");
        {
            std::ofstream file02("data002.db");
        } // ab hier wird file02 geschlossen
    } // ab hier ist auch file01 geschlossen

