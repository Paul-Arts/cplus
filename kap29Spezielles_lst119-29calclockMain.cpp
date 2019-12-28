    #include <29calclock.hpp> //#
    int main() {
        CalendarClock cc{ 2016,2,29, 23,59,59 };
        std::cout << cc << '\n'; // Ausgabe: 2016-02-29 23:59:59
        //= 2016-02-29 23:59:59
        cc.tick();
        std::cout << cc << '\n'; // Ausgabe: 2016-03-01 00:00:00
        //= 2016-03-01 00:00:00
    }

