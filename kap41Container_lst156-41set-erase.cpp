    #include <set> //#
    #include <iostream> //#
    using std::cout; using std::ostream; using std::set; //#
    template<typename E, typename C> ostream& operator<<=(ostream&os, const set<E,C> &data) //#
      { for(auto &e:data) os<<e<<' '; return os<<'\n'; } //#
    int main() { //#
    set<int> data{ 10, 20, 30, 40, 50, 60, 70 };
    auto lo = data.lower_bound(35);
    auto up = data.upper_bound(55);
    data.erase(lo, up);      // l?scht alle Zahlen zwischen 35..55
    cout <<= data;           // Ausgabe: 10 20 30 60 70
    //= 10 20 30 60 70

    lo = data.lower_bound(20);
    up = data.upper_bound(60);
    data.erase(lo, up);      // l?scht inklusive 60, weil up auf 70 verweist
    cout <<= data;           // Ausgabe: 10 70
    //= 10 70

    auto n = data.erase(69); // l?scht nichts
    cout << "Anzahl entfernter Elemente: "<< n << '\n';
    //= Anzahl entfernter Elemente: 0
    n = data.erase(70);      // l?scht ein Element
    cout << "Anzahl entfernter Elemente: "<< n << '\n';
    //= Anzahl entfernter Elemente: 1
    cout <<= data;           // Ausgabe: 10
    //= 10
    } //#


