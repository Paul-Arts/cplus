    #include <chrono>
    #include <iostream>

    void sleep(std::chrono::seconds dur) {
        std::cout << dur.count() << "s\n";
        /* ... */
    }

    int main() {
        using namespace std::chrono;

        #if 0 //#
        sleep(3);          // Fehler: keine implizite Konvertierung von int
        #endif //#
        sleep(seconds{4}); // okay
        //= 4s
        sleep(5s);         // okay
        //= 5s

        seconds x{6};
        sleep(x);          // okay
        //= 6s

        auto y = 10s;
        y += 20s;          // Inkrementieren mit Sekunden
        sleep(y);          // nun also 30s
        //= 30s
        y = y - 6s;        // Subtraktion von Sekunden
        sleep(y);          // und nun nur noch 24s
        //= 24s
        y /= 2;            // Division durch einen Skalar
        sleep(y);          // 12s
        //= 12s
        #if 0 //#

        sleep(y + 7);      // Fehler: seconds+int geht nicht
        #endif //#
    }

