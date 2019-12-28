    #include <unordered_set>
    #include <iostream>
    using std::unordered_set; using std::cout;
    template<typename Elem, typename Cmp>
    std::ostream& operator<<=(std::ostream&os, const unordered_set<Elem,Cmp>&data){
        for(auto &e : data) {
            os << e << ' ';
        }
        return os << '\n'; // '<<=' statt '<<' f?r Zeilenumbruch
    }
    int main() {
       // Beispielcode hier
       cout <<= unordered_set<int>{1,2,3}; //#
       //= 3 2 1
    }


