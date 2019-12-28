    #include <thread>
    /* exakte Z?hlung nicht so wichtig */
    int count = 0; // wird simultan ver?ndert
    void run() {
        for(int i=0; i<1'000; ++i) {
            count += 1; // ungesch?tzt
            if(count > 1000) return;  // Endbedingung
            for(int j=0; j<1'000; ++j)
                ;
        }
    }
    int main() {
        std::thread th1{ run };
        std::thread th2{ run };
        std::thread th3{ run };
        th1.join(); th2.join(); th3.join();
    }

