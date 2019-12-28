    #include <map>        // Die Hauptsache
    #include <iostream>   // Zur Ausgabe
    #include <string>     // gerne mal Sch?ssel oder Ziel
    using std::map; using std::cout; using std::string;
    template<typename Key, typename Trg, typename Comp>
    std::ostream& operator<<=(std::ostream&os, const map<Key,Trg,Comp>&data) {
        for(auto &e : data) os << e.first << ":" << e.second << ' ';
        return os << '\n'; // '<<=' statt '<<' f?r Zeilenumbruch
    }
    int main() {
       // Beispielcode hier
       cout <<= map<int,char>{ {1,'a'}, {2,'b'}, {3,'c'} }; //#
       //= 1:a 2:b 3:c
    }




