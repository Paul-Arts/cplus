    struct Typ {
        char* data_;             // roher Zeiger kann f?r unklare Besitzverh?ltnisse sorgen
        Typ(int n) : data_(new char[n]) {}
        ~Typ() { delete[] data_; }           // den Destruktor ben?tigen Sie

        Typ(const Typ&) = delete;            // keine Kopie zulassen
        Typ& operator=(const Typ&) = delete; // keine Zuweisung bitte
        Typ(Typ&&) = delete;                 // kein Verschieben
        Typ& operator=(Typ&&) = delete;      // kein Verschiebeoperator
    };


