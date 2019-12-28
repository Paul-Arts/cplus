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
    map<string,int> zwerge;
    zwerge.emplace("Fili",  2859);
    cout << zwerge["Fili"] << '\n'; // Ausgabe: 2859
    //= 2859
    cout << zwerge["Dori"] << '\n'; // neu erzeugt. Ausgabe: 0
    //= 0
    zwerge["Kili"] = 2846;          // neu erzeugt und gleich ?berschrieben
    cout << zwerge["Kili"] << '\n'; // Ausgabe: 2846
    //= 2846
    cout <<= zwerge;                // Ausgabe: Dori:0 Fili:2859 Kili:2846
    //= Dori:0 Fili:2859 Kili:2846
    } //#


