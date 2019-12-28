    #include <iostream>
    #include <chrono> // milliseconds
    #include <thread> // this_thread::sleep

    // irgendwo anders definiert:
    int installMouseDriver(volatile int *xpos, volatile int *ypos);
    constexpr auto DELAY = std::chrono::milliseconds(100);
    #if 0 //#
    constexpr auto LOOPS = 30; // 30*100ms = 3s
    #else //#
    constexpr auto LOOPS = 3; //#
    #endif //#
    int main() {
        volatile int x{};
        volatile int y{};
        installMouseDriver( &x, &y );       // MouseDriver aktualisiert x und y
        for(int i=0; i<LOOPS; ++i) {
            std::cout << "maus bei ("<<x<<","<<y<<")\n";
            std::this_thread::sleep_for(DELAY);
        }
        //= maus bei (0,0)
        //= maus bei (0,0)
        //= maus bei (0,0)
    }
    int installMouseDriver(volatile int *x, volatile int *y) { return 0; } //#

