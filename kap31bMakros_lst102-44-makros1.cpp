    // Dateiname: makros.cpp
    #define AUSGABE_AUF_STANDARD // Umschalten von cerr und cout

    #include "meine-makros.hpp"
    #include "meine-makros.hpp"  // Ups, aus Versehen doppelt.

    int main() {
        MESSAGE("Programmstart");
        //= Programmstart
        container_type data(SIZE);
        MESSAGE("Der Container hat " << data.size() << " Elemente.");
        //= Der Container hat 10 Elemente.
        MESSAGE("Programmende");
        //= Programmende
        OUT << "Das ging ja noch mal gut.\n";
        //= Das ging ja noch mal gut.
    }

