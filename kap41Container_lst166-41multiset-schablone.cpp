    #include <set>     // multiset
    #include <iostream>
    using std::multiset; using std::cout;
    template<typename Elem, typename Comp>
    std::ostream& operator<<=(std::ostream&os, const multiset<Elem,Comp>&data) {
        for(auto &e : data) {
            os << e << ' ';
        }
        return os << '\n'; // '<<=' statt '<<' f?r Zeilenumbruch
    }
    int main() {
       // Beispielcode hier
       cout <<= multiset<int>{1,2,2,3,1}; //#
       //= 1 1 2 2 3
    }

