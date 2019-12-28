    #include <chrono>
    void sleep(std::chrono::seconds s) { // Nimmt Sekunden als Dauer
        /* ... */
    }
    /* ... */
    int main() {
        using namespace std::chrono; // Literale verf?gbar machen
        sleep(10min);   // 10 Minuten warten, also 600 Sekunden
        #if 0 //#
        sleep(10ms);    // 10 Millisekunden? Mit Sekunden nicht abzubilden.
        #endif //#
    }

