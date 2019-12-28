    #include <vector> //#
    #include <iostream> //#
    using std::vector; using std::cout; //#
    #include <list>
    #include <string>
    #include <iterator>                      // make_move_iterator
    using std::make_move_iterator; using std::string;
    // ...
    std::ostream& operator<<(std::ostream&os, const vector<int>&data) { os<<"{"; for(auto &e : data) os << e << ' '; return os<<"}"; } //#
    std::ostream& operator<<(std::ostream&os, const vector<string>&data) { os<<"{"; for(auto &e : data) os << "\""<<e<<"\"" << ", "; return os<<"}"; } //#
    std::ostream& operator<<(std::ostream&os, const std::list<string>&data) { os<<"{"; for(auto &e : data) os << "\""<<e<<"\"" << ", "; return os<<"}"; } //#
    vector<int> erzeuge() { return vector<int>{8, 9, 10}; }
    size_t zaehle(vector<int> d) { return d.size(); }
    // ...
    int main() { //#
    vector<int> input{1,2,3};
    vector<int> outputA(std::move(input));  // Verschiebung
    vector<int> outputB = std::move(input); // auch Verschiebung, keine Zuweisung
    vector<int> data = erzeuge();           // Return-Value-Optimization
    cout << zaehle(input) << '\n';          // Aufruf per Copy-by-Value
    //= 0
    // elementweise aus einen anderen Container verschieben
    std::list<string> quelle{ "a", "a", "a", "BB", "CC", "DD", "b", "b" };
    auto von = quelle.begin();
    std::advance(von, 3); // 3 vorw?rts, bei list aber langsam
    auto bis = von;
    std::advance(bis, 3); // nochmal 3 vorw?rts
    vector<string> ziel(make_move_iterator(von), make_move_iterator(bis));
    // quelle ist nun {"a", "a", "a", "", "", "", "b", "b"}, ziel ist nun {"BB", "CC", "DD"}
    cout << quelle << " - " << ziel << '\n'; //#
    //= {"a", "a", "a", "", "", "", "b", "b", } - {"BB", "CC", "DD", }
    } //#

