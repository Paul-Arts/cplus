    #include <unordered_set> //#
    #include <set>
    #include <iostream> //#
    using std::unordered_set; using std::cout; //#
    template<typename Elem> //#
    std::ostream& operator<<=(std::ostream&os, const unordered_set<Elem>&data) { //#
        for(auto &e : data) { os << e << ' '; } return os << '\n'; } //#
    template<typename Key>
    std::set<Key> sorted(const unordered_set<Key> &data)
      { return std::set<Key>(data.begin(), data.end()); }
    // ...
    int main() { //#
    // ohne Argumente
    unordered_set<int> leer{};
    cout <<= leer;      // Ausgabe:
    //=
    // Initialisierungsliste
    unordered_set<int> daten{1,1,2,2,3,3,4,4,5,5};// doppelte werden nicht ?bernommen
    cout <<= daten;     // Ausgabe in etwa: 5 4 3 2 1
    //= 5 4 3 2 1
    // Kopie
    unordered_set<int> kopie(daten);
    cout <<= kopie;     // Ausgabe in etwa: 5 4 3 2 1
    //= 5 4 3 2 1
    // Bereich
    auto so1 = sorted(daten);
    unordered_set<int> bereich(std::next(so1.begin()), std::prev(so1.end()));
    cout <<= bereich;   // Ausgabe in etwa: 2 3 4
    //= 4 3 2
    } //#

