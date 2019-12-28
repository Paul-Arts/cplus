    #include <array>
    struct Data {
        static const size_t SPAET;            // Konstante deklarieren
        static const size_t FRUEH;            // Konstante deklarieren
    };
    void func() {
        int x = Data::SPAET;                  // Konstante verwenden
        (void)x;//#
    }
    const size_t Data::FRUEH = 10;            // Konstante definieren
    std::array<int, Data::FRUEH> arrFRUEH {}; // Konstante verwenden
    #if 0                                             //#
    std::array<int, Data::SPAET> arrSPAET {}; // Konstante verwenden
    #endif                                            //#
    const size_t Data::SPAET = 10;            // Konstante definieren
    int main() {
        func();
    }

