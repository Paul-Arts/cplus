    #include <unordered_set> //#
    #include <iostream> //#
    using std::unordered_set; using std::cout; //#
    template<typename Elem, typename Comp> //#
    std::ostream& operator<<=(std::ostream&os, const unordered_set<Elem,Comp>&data) { //#
        for(auto &e : data) { os << e << ' '; } return os << '\n'; } //#
    int main() { //#
    unordered_set<int> data;
    auto res1 = data.insert( 5 );                  // einf?gen per Kopie
    if(res1.second) cout << "ja, 5 nun drin\n";    // das klappt
    //= ja, 5 nun drin
    auto res2 = data.emplace( 5 );                 // einf?gen vor Ort
    if(res2.second) cout << "zweite 5 nun drin\n"; // das klappt nicht
    auto res3 = data.insert(res1.first, 6 );       // mit Positionshinweis
    // res3 ist nur ein iterator ohne bool
    cout << *res3 << '\n';                         // auf jeden Fall eine 6
    //= 6
    } //#


