    #include <map> //#
    #include <iostream> //#
    #include <string>     //#
    using std::map; using std::cout; using std::string; //#
    template<typename Key, typename Trg, typename Comp> //#
    std::ostream& operator<<=(std::ostream&os, const map<Key,Trg,Comp>&data) { //#
        for(auto &e : data) { //#
            os << e.first << ":" << e.second << ' '; //#
        } //#
        return os << '\n'; // '<<=' statt '<<' f?r Zeilenumbruch //#
    } //#
    int main() { //#
    map<string,string> data { {"Hans","Albers"}, {"Heinz","Ruehmann" }, };
    cout <<= data;                         // Hans:Albers Heinz:Ruehmann
    //= Hans:Albers Heinz:Ruehmann
    data.rbegin()->second = "Erhardt";     // Ziel ?berschreiben
    cout <<= data;                         // Hans:Albers Heinz:Erhardt
    //= Hans:Albers Heinz:Erhardt
    } //#


