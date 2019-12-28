    class Year {
    public:
        using value_type = int;             // Typalias einf?hren
        value_type value_;                  // eigentlich intern verwendeter Typ
    public:
        explicit Year(value_type v) : value_{v} {}
        value_type value() { return value_; }
    };
    int main() {
       Year year{ 2014 };                   // hier auf Compiler-Konvertierung z?hlen
       Year::value_type val = year.value(); // verwenden Sie ::
       (void)val;//#
    }

