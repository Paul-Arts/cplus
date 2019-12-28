    #include <set> //#
    #include <iostream> //#
    using std::cout; using std::ostream; using std::set; //#
    template<typename E, typename C> ostream& operator<<=(ostream&os, const set<E,C> &data) //#
      { for(auto &e:data) os<<e<<' '; return os<<'\n'; } //#
    int main() { //#
    set<int> quelle{1,2,3,4,5};
    cout <<= quelle;           // Ausgabe: 1 2 3 4 5
    //= 1 2 3 4 5
    set<int> ziel( std::move(quelle) ); // verschieben statt kopieren
    cout <<= quelle;           // Ausgabe:
    //=
    cout <<= ziel;             // Ausgabe: 1 2 3 4 5
    //= 1 2 3 4 5
    } //#


