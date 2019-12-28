    #include <chrono> //#
    void sleep(std::chrono::nanoseconds d) {} //#
    int main() { //#
    using namespace std::chrono; //#
    sleep(10min);
    sleep(std::chrono::minutes{10});
    sleep(std::chrono::duration<unsigned long,std::ratio<60>>{10});
    } //#

