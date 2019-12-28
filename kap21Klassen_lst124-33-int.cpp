    class Year {
        int value_;                         // eigentlich intern verwendeter Typ
    public:
        explicit Year(int v) : value_{v} {} // Typ wird Teil des Interfaces
        int value() { return value_; }      // auch bei der R?ckgabe
    };
    int main() {
       Year year{ 2014 };                   // Typ int
       int val = year.value();              // passender Typ
       (void)val;//#
    }

