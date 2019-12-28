    #include <29cal.hpp> //#
    int main() {
        Calendar cal{ 2016, 2, 28 };
        std::cout << cal << '\n'; // Ausgabe: 2016-02-28
        //= 2016-02-28
        cal.advance();
        std::cout << cal << '\n'; // Ausgabe: 2016-02-29
        //= 2016-02-29
        cal.advance();
        std::cout << cal << '\n'; // Ausgabe: 2016-03-01
        //= 2016-03-01
    }


