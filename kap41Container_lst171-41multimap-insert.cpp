    #include <map>        //#
    #include <iostream>   //#
    #include <string>     //#
    using std::multimap; using std::cout; using std::string; //#
    template<typename Key, typename Trg, typename Comp> //#
    std::ostream& operator<<=(std::ostream&os, const multimap<Key,Trg,Comp>&data) { //#
        for(auto &e : data) { os << e.first << ":" << e.second << ' '; } return os << '\n'; } //#
    int main() { //#
    using namespace std::literals; // f?r ""s

    multimap<int,string> numlang{};
    numlang.insert( std::make_pair(7, "seven"s) );
    numlang.insert( std::pair<int,string>(7, "sieben"s) );
    numlang.emplace( 7, "yedi"s );
    cout <<= numlang; // Ausgabe: 7:seven 7:sieben 7:yedi
    //= 7:seven 7:sieben 7:yedi
    } //#

