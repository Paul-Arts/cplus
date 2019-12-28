    #include <iostream> //#
    #include <chrono> //#
    long fib(long n) { return n<2L ? 1L : fib(n-1L)+fib(n-2L); } //#
    int main() { //#
    using namespace std::chrono; //#
    auto t0 = steady_clock::now(); //#
    auto res = fib(45);
    // ...
    auto t1 = steady_clock::now(); //#
    std::cout << "Ergebnis: " << res << "\n"; //# Ausgabe: Ergebnis 1836311903
    //= Ergebnis: 1836311903
    #if 0 //#
    std::cout << "Zeit: " << duration_cast<seconds>(t1-t0).count() << "s\n";
    // Ausgabe: Zeit: 7s (z. B.)
    std::cout << "Zeit: " << duration<double>{t1-t0}.count() << "s\n";
    // Ausgabe: Zeit: 7.35303s (z. B.)
    #endif //#
    }

