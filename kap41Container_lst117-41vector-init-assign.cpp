    #include <vector> //#
    #include <iostream> //#
    using std::vector; using std::cout; //#
    std::ostream& operator<<(std::ostream&os, const vector<int>&data) { for(auto &e : data) os << e << ' '; return os; } //#
    int main() { //#
    vector<int> von{ 2,3,4 };
    vector<int> nach{};
    nach = von;                         // Zuweisung mit operator=, nun beide gleich
    cout << von << ',' << nach << '\n'; //#
    //= 2 3 4 ,2 3 4

    vector<int> abfluss{};
    abfluss = std::move(von);           // Verschieben, nun ist 'von' leer
    cout << von << ',' << abfluss << '\n'; //#
    //= ,2 3 4
    vector<int> v;
    v.assign(4, 100);                   // v ist nun {100, 100, 100, 100}
    v.assign(nach.begin(), nach.end()); // v ist nun {2,3,4}
    cout << v << '\n'; //#
    //= 2 3 4
    int z[] = { 10, 20, 30, 40 };
    v.assign(z+1, z+4);                 // v ist nun {20, 30, 40}
    cout << v << '\n'; //#
    //= 20 30 40
    } //#



