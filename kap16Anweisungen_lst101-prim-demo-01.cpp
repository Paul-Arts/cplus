    #include <iostream>                   // cout
    #include <vector>                     // Container vector
    #include <string>                     // stoi
    
    int eingabeBis(int argc, const char* argv[]) {
        /* Zahl ermitteln */
        int bis = 0;                      // neue Variable einf?hren
        if(argc<=1) {                     // if-Anweisung mit then- und else-Block
            std::cout << "Bis wohin wollen Sie Primzahlen berechnen? ";
            if(!(std::cin >> bis)) {      // pr?fen des R?ckgabewerts
                return -1;                // Fehler bei Benutzereingabe
            }
        } else {                          // else-Teil der if-Anweisung
            bis = std::stoi(argv[1]);
        }
        return bis;                       // Eingabe zur?ckliefern
    }

    std::vector<int> prims{2};            // neuer vector mit Initialisierung

    bool testeObPrim(int n) {
        /* prims muss aufsteigend sortiert sein */
        for(int teil : prims) {           // bereichsbasierte for-Schleife
            if(teil*teil > n)             // zu gro?, um ?berhaupt Teiler zu sein?
                return true;              // ... dann innere Schleife vorzeitig beenden
            if(n%teil==0)                 // ist Teiler?
                return false;             // ... dann raus
        }
        return true;                      // kein Teiler gefunden
    }
    void berechnePrimsBis(int bis) {
        /* Prims-Berechnung */
        /* vector muss an dieser Stelle {2} enthalten */
        for(int n=3; n<bis; n=n+2) {      // Standard-for-Schleife
            if(testeObPrim(n)) {
                prims.push_back(n);       // ist prim! merken als Teiler und Ergebnis
            }
        }
    }
    
    void ausgabePrims() {
        for(int prim : prims) {           // bereichsbasiert, ?ber alle Elemente
            std::cout << prim << " ";
        }
        std::cout << "\n";
        //= 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
    }
    
    int main(int argc, const char* argv[]) {
        int bis = eingabeBis(argc, argv); // deklariert Variable
        if(bis < 2) { return 1; }         // Raus aus main mit "nicht-ok"-Wert.
        berechnePrimsBis(bis);
        ausgabePrims();
        return 0;
    }


