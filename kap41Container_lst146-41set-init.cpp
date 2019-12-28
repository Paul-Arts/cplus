    #include <set> //#
    #include <iostream> //#
    using std::cout; using std::ostream; using std::set; //#
    template<typename E, typename C> ostream& operator<<=(ostream&os, const set<E,C> &data) //#
      { for(auto &e:data) os<<e<<' '; return os<<'\n'; } //#
    int main() { //#
    // ohne Argumente
    set<int> leer{};
    cout <<= leer;           // Ausgabe:
    //=
    // Initialisierungsliste
    set<int> liste{ 1,1,2,2,3,3,4,4,5,5 }; // set ?bernimmt keine doppelten
    cout <<= liste;          // Ausgabe: 1 2 3 4 5
    //= 1 2 3 4 5
    // Kopie
    set<int> copy(liste);
    cout <<= copy;           // Ausgabe: 1 2 3 4 5
    //= 1 2 3 4 5
    // Bereich
    set<int> range( std::next(liste.begin()), std::prev(liste.end()));
    cout <<= range;          // Ausgabe: 2 3 4
    //= 2 3 4
    } //#

