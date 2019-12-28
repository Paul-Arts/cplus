    #include <iostream>                 // cout
    #include <string>

    void drucke(int n) {                // Funktion drucke f?r Typ int
        std::cout << "Zahl:" << n << "\n";
    }
    void drucke(std::string s) {        // gleicher Name, anderer Typ
        std::cout << "Zeichenkette:" << s << "\n";
    }

    int main() {
        int zahl = 10;
        std::string name = "Bilbo";
        drucke(zahl);                   // ruft drucke(int) auf, zahl ist int
        //= Zahl:10
        drucke(name);                   // ruft drucke(string) auf, name ist string
        //= Zeichenkette:Bilbo
        drucke(11 + 22);                // Ausdruck ist int
        //= Zahl:33
        drucke(name + " Baggins");      // Ausdruck ist string
        //= Zeichenkette:Bilbo Baggins
    }

