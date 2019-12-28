    #include <iostream> //#
    #include <thread> //#
    using std::cout; using std::endl; //#
    long fib(long n) { return n<=1 ? n : fib(n-1)+fib(n-2); } //#
    void aufgabe1() { auto r = fib(30); cout << "fib(40)=" << r << endl; } //#
    void aufgabe2() { auto r = fib(31); cout << "fib(41)=" << r << endl; } //#
    void aufgabe3() { auto r = fib(32); cout << "fib(42)=" << r << endl; } //#
    int main() { //#
    std::thread meinThread{ [] {
        aufgabe1();
        aufgabe2();
        aufgabe3();
    } };
    //= fib(40)=832040
    //= fib(41)=1346269
    //= fib(42)=2178309
    meinThread.join(); //#
    } //#

