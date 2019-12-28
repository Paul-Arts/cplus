    #include <set> //#
    #include <vector>
    // ...
    #include <iostream> //#
    using std::cout; using std::ostream; using std::set; //#
    template<typename E, typename C> ostream& operator<<=(ostream&os, const set<E,C> &data) //#
      { for(auto &e:data) os<<e<<' '; return os<<'\n'; } //#
    int main() { //#
    set<int> data{ 10, 20, 30, };
    data.insert( { 40, 50, 60, 70 }); // Initialisierungliste
    std::vector<int> neu{ 5, 25, 35, 15, 25, 75, 95 };
    data.insert( neu.cbegin()+1, neu.cend()-1 ); // Bereich
    cout <<= data; // Ausgabe: 10 15 20 25 30 35 40 50 60 70 75
    //= 10 15 20 25 30 35 40 50 60 70 75
    } //#

