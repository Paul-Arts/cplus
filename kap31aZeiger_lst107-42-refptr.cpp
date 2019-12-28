    #include <vector>
    #include <numeric>   // iota
    #include <iostream>
    using std::vector; using std::cout;
    struct Zahl {        // stellvertretend f?r ein gro?es, teures Objekt
        unsigned long val_;
        Zahl(unsigned long val) : val_{val} {}
        Zahl() : val_{0} {}
    };
    /* ermittelt anhand bisheriger Primzahlen, ob z eine Primzahl ist */
    bool isPrim(const Zahl& z, const vector<Zahl*> prims) {
        for(Zahl* p : prims) {
            if((p->val_*p->val_) > z.val_) return true;   // zu gro?
            if(z.val_ % p->val_ == 0) return false;       // ist Teiler
        }
        return true;
    }
    int main() {
        vector<Zahl> alleZahlen(98);   // 98 mit null initialisierte Elemente
        std::iota(begin(alleZahlen), end(alleZahlen), 3); // 3..100
        /* alleZahlen enth?lt jetzt {3..100} */
        vector<Zahl*> prims{};         // bekommt ermittelte Primzahlen
        Zahl zwei{2};
        prims.push_back(&zwei);        // die 2 wird gebraucht
        for(Zahl &z : alleZahlen) {    // ?ber alle Zahlen iterieren
            if(isPrim(z, prims)) {
                prims.push_back( &z ); // speichere Adresse
            }
        }
        /* Rest ausgeben */
        for(Zahl* p : prims)
            cout << p->val_ << " ";
        cout << "\n";
        //= 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
    }

