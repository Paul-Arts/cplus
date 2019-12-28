    #include <chrono>
    #include <iostream>
    int main() {
        using namespace std::chrono;
        milliseconds myMs = 4'000ms;
        std::cout << myMs.count()/1000 << "s\n";
        //= 4s
        std::cout << myMs.count()*1000 << "us\n";
        //= 4000000us
        std::cout << duration_cast<seconds>(myMs).count() << "s\n"; // explizit
        //= 4s
        std::cout << microseconds(myMs).count() << "us\n";          // wie implizit
        //= 4000000us
    }

