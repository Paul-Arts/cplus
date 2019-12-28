    // #includes, prims, eingabeBis(), ausgabePrims() und main() wie zuvor 
    #include <iostream>                      //#
    #include <vector>                        //#
    #include <string>                        //#
    int eingabeBis(int argc, const char* argv[]) { //#
        /* Zahl ermitteln */ //#
        int bis = 0; //#
        if(argc<=1) {  //#
            std::cout << "Bis wohin wollen Sie Primzahlen berechnen? "; //#
            if(not std::cin >> bis) { // pr?fen des R?ckgabewerts //#
                return -1; // Fehler bei Benutzereingabe //#
            } //#
        } else {    // else-Teil der if-Anweisung //#
            bis = std::stoi(argv[1]); //#
        } //#
        return bis; // Eingabe zur?ckliefern //#
    }//#
    //#
    std::vector<int> prims{2};
    void berechnePrimsBis(int bis) {
        /* Prims-Berechnung */
        /* vector muss an dieser Stelle {2} enthalten */
        for(int n=3; n<bis; n=n+2) {
            for(int teil: prims) {
                if(teil*teil > n)
                    goto prim;      // mit goto, weil ein break ...
                if(n%teil==0)
                    goto nichtPrim; // ... ?ber zwei Schleifen nicht geht.
            }
          prim: ;                   // Ziel des Sprungs vor push_back
            prims.push_back(n);     // ist prim! merken als Teiler und Ergebnis
          nichtPrim: ;              // Ziel des Sprungs hinter push_back
        }
    }
    //#
    void ausgabePrims() {  //#
        for(int prim : prims) {              //#
            std::cout << prim << " "; //#
        } //#
        std::cout << "\n"; //#
        //= 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
    }//#
    //#
    int main(int argc, const char* argv[]) { //#
        int bis = eingabeBis(argc, argv); //#
        if(bis < 2) { //#
            return 1;//#
        }//#
        berechnePrimsBis(bis);//#
        ausgabePrims();//#
        return 0;//#
    }//#



