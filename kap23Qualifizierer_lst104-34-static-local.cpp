    #include <iostream>                     // cout
    class Keyboard {
        Keyboard(const Keyboard&) = delete; // keine Kopie
        const size_t nr_;                   // aktuelle Nummer
    public:
        static size_t count_;               // z?hlt erzeugte Instanzen
        explicit Keyboard() : nr_{count_++} {
            std::cout << "  Keyboard().nr:"<<nr_<<"\n";
        }
    };
    size_t Keyboard::count_ = 0;            // statisches Datenfeld initialisieren
    Keyboard& getKeyboard() {
        std::cout << "  getKeyboard()\n";
        static Keyboard keyboard{};         // statische lokale Variable
        return keyboard;
    }
    void func() {
        std::cout << "kbFunc...\n";
        Keyboard& kbFunc = getKeyboard();
        (void)kbFunc;//#
    }
    int main() {
        std::cout << "kbA...\n";
        //= kbA...
        Keyboard& kbA = getKeyboard();
        //= getKeyboard()
        //= Keyboard().nr:0
        func();
        //= kbFunc...
        //= getKeyboard()
        std::cout << "kbB...\n";
        //= kbB...
        Keyboard& kbB = getKeyboard();
        //= getKeyboard()
        std::cout << "count:" << Keyboard::count_ << "\n";
        //= count:1
        (void)kbA;(void)kbB;//#
    }


