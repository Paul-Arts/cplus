    #include <set> //#
    #include <iostream> //#
    using std::cout; using std::ostream; using std::set;
    template<typename C> ostream& operator<<=(ostream&os, const set<int,C> &data) //#
      { for(auto &e:data) os<<e<<' '; return os<<'\n'; } //#
    int main() { //#
    auto vergl = [](auto e, auto f) { return e <= f; }; // ung?ltig definiert!
    std::set<int,decltype(vergl)> data(vergl);
    data.insert({ 9,5,7,2,3,6,8 });
    cout <<= data;                    // Ausgabe mit Gl?ck: 2 3 5 6 7 8 9
    //= 2 3 5 6 7 8 9
    auto wo = data.find(7);
    if(wo != data.end()) {
        cout << "hab es: " << *wo << '\n';
    } else {
        cout << "weg isses!" << '\n'; // wahrscheinlich landen Sie hier
    }
    //= weg isses!
    } //#

