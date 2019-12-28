    #include <set> //#
    #include <vector>
    // ...
    #include <iostream> //#
    using std::cout; using std::ostream; using std::set; //#
    template<typename E, typename C> ostream& operator<<=(ostream&os, const set<E,C> &data) //#
      { for(auto &e:data) os<<e<<' '; return os<<'\n'; } //#
    int main() { //#
    set<int> data{1,2,3,4,5};
    std::vector<int> quelle{10, 20, 30, 40, 50};

    // Es gibt kein set::assign:
    #if 0 //#
    data.assign(quelle.begin(), quelle.end());
    #endif 0 //#

    // Simulieren Sie es also mittels eines tempor?ren set:
    set<int> temp(quelle.begin(), quelle.end()); // aus Quelle kopieren...
    data.swap(temp);                             // ... Inhalte effizient vertauschen
    cout <<= data; // Ausgabe: 10 20 30 40 50
    //= 10 20 30 40 50

    // ...oder per vorherigem clear und darauf folgendem insert:
    data.clear();                                // leeren ...
    data.insert(quelle.begin(), quelle.end());   // ... und einf?gen
    cout <<= data; // Ausgabe: 10 20 30 40 50
    //= 10 20 30 40 50
    } //#

