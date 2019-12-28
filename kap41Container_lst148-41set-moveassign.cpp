    #include <set> //#
    #include <iostream> //#
    using std::cout; using std::ostream; using std::set; //#
    template<typename E, typename C> ostream& operator<<=(ostream&os, const set<E,C> &data) //#
      { for(auto &e:data) os<<e<<' '; return os<<'\n'; } //#
    int main() { //#
    set<int> quelle{1,2,3,4,5};
    set<int> ziel{};
    set<int> ziel2{};
    cout <<= quelle;           // Ausgabe: 1 2 3 4 5
    //= 1 2 3 4 5
    cout <<= ziel;             // Ausgabe:
    //=
    cout <<= ziel2;            // Ausgabe:
    //=
    ziel = quelle;             // nachtr?glich kopieren
    cout <<= quelle;           // Ausgabe: 1 2 3 4 5
    //= 1 2 3 4 5
    cout <<= ziel;             // Ausgabe: 1 2 3 4 5
    //= 1 2 3 4 5
    ziel2 = std::move(quelle); // verschieben
    cout <<= quelle;           // Ausgabe:
    //=
    cout <<= ziel2;            // Ausgabe: 1 2 3 4 5
    //= 1 2 3 4 5
    } //#

