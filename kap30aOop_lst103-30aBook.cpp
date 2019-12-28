    #include <string> //#
    using namespace std; //#
    struct Titel { std::string v_; }; //#
    struct Autor { std::string v_; }; //#
    struct Buch {
       auto getTitel() { return Titel{"Das C++ Handbuch"s}; }
       auto getAutor() { return Autor{"Torsten T. Will"s}; }
       auto umblaettern() { return /* Referenz zur n?chsten Seite */ 42; }
       auto getSeite() { return "aktueller Seiteninhalt"; }
       auto getStandort() { return /* Regalnummer/Buchnummer */ 73; }
    };
    struct Katalog { int findeBuchNach(Titel,Autor); }; //#
    struct BuchFinder {
        Katalog katalog;
        auto finde(Buch& buch) { /* Regalnummer/Buchnummer */
            katalog.findeBuchNach(buch.getTitel(), buch.getAutor());
        }
    };

