    #include <map>        //#
    #include <iostream>   //#
    #include <string>     //#
    using std::multimap; using std::cout; using std::string; //#
    template<typename Key, typename Trg, typename Comp> //#
    std::ostream& operator<<=(std::ostream&os, const multimap<Key,Trg,Comp>&data) { //#
        for(auto &e : data) { os << e.first << ":" << e.second << ' '; } return os << '\n'; } //#
    int main() { //#
    multimap<char,int> vals{ {'c',1}, {'c',8}, {'g',1},
        {'c',1}, {'a',7}, {'a',1}, {'c',2}, };
    cout <<= vals;            // Ausgabe: a:7 a:1 c:1 c:8 c:1 c:2 g:1
    //= a:7 a:1 c:1 c:8 c:1 c:2 g:1

    vals.erase( @'@c@'@ );        // l?scht alle 'c's
    cout <<= vals;            // Ausgabe: a:7 a:1 g:1
    //= a:7 a:1 g:1

    vals.erase(vals.begin()); // l?scht nur eines der 'a's
    cout <<= vals;            // Ausgabe: a:1 g:1
    //= a:1 g:1
    } //#


