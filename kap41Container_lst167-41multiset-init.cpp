    #include <set>     //#
    #include <vector>
    // ...
    #include <iostream> //#
    using std::multiset; using std::cout; //#
    template<typename Elem, typename Comp> //#
    std::ostream& operator<<=(std::ostream&os, const multiset<Elem,Comp>&data) { //#
        for(auto &e : data) os << e << ' '; return os << '\n'; } //#
    int main() { //#
    multiset<int> msinit{1,2,2,3,1};              // sortiert bei Initialisierung
    cout <<= msinit; // Ausgabe: 1 1 2 2 3
    //= 1 1 2 2 3
    std::vector<int> in{ 7,7,7,7,7,7,7 };
    std::set<int> srange( in.begin(), in.end() ); // set entfernt doppelte
    cout << srange.size() << ": " << *srange.begin() << '\n'; // Ausgabe: 1: 7
    //= 1: 7

    multiset<int> msrange( in.begin(), in.end() ); // multiset erh?lt doppelte
    cout <<= msrange; // Ausgabe: 7 7 7 7 7 7 7
    //= 7 7 7 7 7 7 7
    } //#


