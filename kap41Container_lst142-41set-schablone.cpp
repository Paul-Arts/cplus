    #include <set>
    #include <iostream>
    using std::set; using std::cout;
    template<typename Elem, typename Comp>
    std::ostream& operator<<=(std::ostream&os, const set<Elem,Comp>&data) {
        for(auto &e : data) {
            os << e << ' ';
        }
        return os << '\n'; // '<<=' statt '<<' f?r Zeilenumbruch
    }
    int main() {
       // Beispielcode hier
       cout <<= set<int>{1,2,3}; //#
       //= 1 2 3
    }

