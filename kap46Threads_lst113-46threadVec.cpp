    #include <iostream>
    #include <thread>
    #include <vector>
    using std::cout; using std::endl;

    long fib(long n) { return n<=1 ? n : fib(n-1)+fib(n-2); }
    void runFib(long n) { auto r = fib(n); cout << "fib("<<n<<")=" << r << endl; }

    int main() {
        std::vector<std::thread> threads;
        // starten
        for( auto n : { 38, 39, 40, 41, 42, 43, }) {
            threads.emplace_back( runFib, n );
        }
        // warten
        for( auto &th : threads ) {
            th.join();
        }
        //= fib(38)=39088169
        //= fib(39)=63245986
        //= fib(40)=102334155
        //= fib(41)=165580141
        //= fib(42)=267914296
        //= fib(43)=433494437
    }

