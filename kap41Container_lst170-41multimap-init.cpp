    #include <map>        //#
    #include <iostream>   //#
    #include <string>     //#
    using std::multimap; using std::cout; using std::string; //#
    template<typename Key, typename Trg, typename Comp> //#
    std::ostream& operator<<=(std::ostream&os, const multimap<Key,Trg,Comp>&data) { //#
        for(auto &e : data) { os << e.first << ":" << e.second << ' '; } return os << '\n'; } //#
    int main() { //#
    using namespace std::literals; // f?r ""s
    multimap<int,string> numlang{
        {7,"sieben"}, {6,"six"s},
        {7,"siete"s}, {6,"sechs"s},
        {7,"seven"s}, {7,"yedi"s},
        {8,"eight"s} };
    cout <<= numlang; // Ausgabe: 6:six 6:sechs 7:sieben 7:siete 7:seven 7:yedi 8:eight
    //= 6:six 6:sechs 7:sieben 7:siete 7:seven 7:yedi 8:eight
    } //#


