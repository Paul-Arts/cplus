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
    string such7(const map<int,string> &data) {
    #if 0 //#
        return data[7];            // non-const-Methode auf const-Parameter
    #else //#
        (void)data; return "xxx"; //#
    #endif //#
    }
    string such5(const map<int,string> &data) {
        auto it = data.find(5);    // nicht automatisch einf?gend
        return it==data.end() ? string{} : it->second;
    }
    // ...
    int main() { //#
    map<int,string> zwerge{ {1,"eins"}, {3,"drei"}, {5,"fuenf"}, {7,"sieben"} };
    cout << such7(zwerge) << '\n';
    //= xxx
    cout << such5(zwerge) << '\n';  // Ausgabe: fuenf
    //= fuenf
    } //#



