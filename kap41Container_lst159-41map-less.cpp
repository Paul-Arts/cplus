    #include <map> //#
    #include <iostream> //#
    #include <string>     //#
    #include <cstdio> // toupper, tolower
    // ...
    using std::map; using std::cout; using std::string; //#
    template<typename Key, typename Trg, typename Comp> //#
    std::ostream& operator<<=(std::ostream&os, const map<Key,Trg,Comp>&data) { //#
        for(auto &e : data) { //#
            os << e.first << ":" << e.second << ' '; //#
        } //#
        return os << '\n'; // '<<=' statt '<<' f?r Zeilenumbruch //#
    } //#
    int main() { //#
    auto comp = [](char a, char b) { return toupper(a) < toupper(b); };
    map<char,int,decltype(comp)> lets(comp); // als Templateparameter und Argument
    lets['a'] = 1;
    lets['B'] = 2;
    lets['c'] = 3;
    lets['A'] = 4; // ?berschreibt Position 'a'
    cout <<= lets; // Ausgabe: a:4 B:2 c:3
    //= a:4 B:2 c:3

    struct Comp {  // Funktor
        bool operator()(char a, char b) const { return toupper(a) < toupper(b); }
    };
    map<char,int,Comp> lets2; // hier reicht der Templateparameter
    } //#

