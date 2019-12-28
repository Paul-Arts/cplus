    #include <map>        // Die Hauptsache
    #include <iostream>   // Zur Ausgabe
    #include <string>     // gerne mal Sch?ssel oder Ziel
    using std::multimap; using std::cout; using std::string;
    template<typename Key, typename Trg, typename Cmp>
    std::ostream& operator<<=(std::ostream&os, const multimap<Key,Trg,Cmp>&data){
        for(auto &e : data) {
            os << e.first << ":" << e.second << ' ';
        }
        return os << '\n'; // '<<=' statt '<<' f?r Zeilenumbruch
    }
    int main() {
       // Beispielcode hier
       cout <<= multimap<int,char>{ {1,'a'}, {2,'b'}, {2,'c'} }; //#
       //= 1:a 2:b 2:c
    }

