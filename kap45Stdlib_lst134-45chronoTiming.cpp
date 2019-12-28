    #include <iostream>
    #include <chrono>
    long fib(long n) { return n<2L ? 1L : fib(n-1L)+fib(n-2L); }
    int main() {
        using namespace std::chrono;
        auto t0 = steady_clock::now();  // Auf die Pl?tze, fertig, ...
        auto res = fib(17);             // ...los!
        auto t1 = steady_clock::now();  // Stopp!
        std::cout << "Ergebnis: " << res << "\n"; // Ausgabe Ergebnis: 2584
        //= Ergebnis: 2584
        #if 0 //#
        std::cout << "Zeit: " << nanoseconds{t1-t0}.count() << "ns\n";
        #endif //#
        // Ausgabe: Zeit: 50727ns (z. B.)
    }

