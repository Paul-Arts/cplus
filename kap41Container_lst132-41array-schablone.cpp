    #include <array>
    #include <iostream>
    using std::array; using std::cout;
    template<typename Elem, size_t SZ>
    std::ostream& operator<<(std::ostream&os, const array<Elem,SZ>&data) {
        for(auto &e : data) {
            os << e << ' ';
        }
        return os;
    }
    int main() {
       // Beispielcode hier
       cout << array<int,3>{1,2,3} << '\n'; //#
       //= 1 2 3
    }



