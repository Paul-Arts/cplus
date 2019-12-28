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
    map<int,string> plz2ort;
    plz2ort.insert(std::make_pair(53227, "Bonn"));
    plz2ort.emplace(50667, "Koeln");
    cout <<= plz2ort;                    // Ausgabe: 50667:Koeln 53227:Bonn
    //= 50667:Koeln 53227:Bonn
    map<string,int> ort2plz;
    ort2plz.emplace("Koeln", 50667);
    ort2plz.emplace("Koeln", 51063);     // ?berschreibt nicht
    cout <<= ort2plz;                    // Ausgabe: Koeln:50667
    //= Koeln:50667
    } //#


