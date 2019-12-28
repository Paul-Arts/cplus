    #include <string> //#
    #include <iostream> //#
    #include <iomanip>   //#
    using std::cout; using std::setw; using std::string; //#
    //# ======================

    struct MeinWert {
       static int zaehler;
       int nummer_;
       string name_;

       explicit MeinWert(string name) // wie zuvor
          : nummer_{++zaehler} , name_{name}
    #if 0 //#
          { cout << setw(nummer_) << '_'  << "Konstruktor " << name_ << "\n"; }
    #else //#
          { cout << setw(nummer_) << std::setfill( '_') << '_' << "Konstruktor " << name_ << "\n"; } //#
    #endif //#
       MeinWert(const MeinWert &orig) // neuer Kopierkonstruktor
          : nummer_{++zaehler} , name_{orig.name_ + "-Kopie"}
    #if 0 //#
          { cout << setw(nummer_)<<" " << "Kopierkonstruktor " << name_ << "\n"; }
    #else //#
          { cout << setw(nummer_) << std::setfill( '_') <<"_" << "Kopierkonstruktor " << name_ << "\n"; } //#
    #endif //#
       ~MeinWert() // wie zuvor
       {
    #if 0 //#
          cout << setw(nummer_)<<" " << "Destruktor " << name_ << "\n";
    #else //#
          cout << setw(nummer_)<< std::setfill( '_')<<"_" << "Destruktor " << name_ << "\n"; //#
    #endif //#
       }
    };
    int MeinWert::zaehler = 0;
    //# ======================
    void funktion(MeinWert paramWert) { //#
        std::cout << "(funktion)\n"; //#
        MeinWert lokalWert{"lokal"}; //#
    } //#
    int main() { //#
        MeinWert mwert1{"mwert1"}; //#
        funktion( MeinWert{"temp"} ); //#
        funktion( mwert1 ); //#
        { //#
            MeinWert mwert2{"mwert2"}; //#
        } //#
        //= _Konstruktor mwert1
        //= __Konstruktor temp
        //= (funktion)
        //= ___Konstruktor lokal
        //= ___Destruktor lokal
        //= __Destruktor temp
        //= ____Kopierkonstruktor mwert1-Kopie
        //= (funktion)
        //= _____Konstruktor lokal
        //= _____Destruktor lokal
        //= ____Destruktor mwert1-Kopie
        //= ______Konstruktor mwert2
        //= ______Destruktor mwert2
        //= _Destruktor mwert1
    } //#

