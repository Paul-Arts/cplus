    #include <iostream>
    #include <string>
    #include <thread>
    #include <mutex>
    thread_local unsigned int usage = 0;
    static std::mutex cout_mutex;
    void use(const std::string& thread_name) {
        ++usage;
        std::lock_guard<std::mutex> lock(cout_mutex); // Ausgabe sch?tzen
        std::cout << thread_name << ": " << usage << '\n';
    }
    int main() {
        std::thread a{use, "a"}, b{use, "b"};
        use("main");
        a.join(); b.join(); // warten, bis fertig
        //= main: 1
        //= b: 1
        //= a: 1
    }

