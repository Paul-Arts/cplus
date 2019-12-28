    #include <vector> //#
    #include <iostream> //#
    using std::vector; using std::cout; //#
    std::ostream& operator<<(std::ostream&os, const vector<int>&data) { for(auto &e : data) os << e << ' '; return os; } //#
    int main() { //#
    vector<int> zeros(10);        // 10 Nullen
    cout << zeros << '\n'; //#
    //= 0 0 0 0 0 0 0 0 0 0
    vector<int> sechsen(10, 6);   // 10 Sechsen
    cout << sechsen << '\n'; //#
    //= 6 6 6 6 6 6 6 6 6 6
    vector<int> zehn{10};         // Achtung! Nur eine 10
    cout << zehn << '\n'; //#
    //= 10
    vector<int> zehnSechs{10, 6}; // Achtung! Zwei Elemente 10 und 6
    cout << zehnSechs << '\n'; //#
    //= 10 6
    } //#

