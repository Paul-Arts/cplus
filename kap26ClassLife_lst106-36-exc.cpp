    #include <iostream> // cout
    #include <stdexcept> // runtime_error
    struct KannWerfen {
        KannWerfen(int wasSollPassieren) {
            std::cout << "Konstruktor " << wasSollPassieren << "...\n";
            if(wasSollPassieren == 666)
                throw std::runtime_error("Testfehler");
            std::cout << "...Konstruktor fertig\n";
        }
        ~KannWerfen() {
            std::cout << "Destruktor.\n";
        }
    };
    int main() {
        try {
            KannWerfen kw1{0};               // okay, l?st keine Ausnahme aus
            //= Konstruktor 0...
            //= ...Konstruktor fertig
            //= Destruktor.
        } catch(std::runtime_error &exc) {
            std::cout << "Gefangen-1: " << exc.what() << "\n";
        }
        try {
            KannWerfen kw2{666};             // l?st aus, kw2 wird nicht erzeugt
            //= Konstruktor 666...
        } catch(std::runtime_error &exc) {
            std::cout << "Gefangen-2: " << exc.what() << "\n";
            //= Gefangen-2: Testfehler
        }
    }

