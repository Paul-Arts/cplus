    #include <array> //#
    #include <iostream> //#
    using std::array; using std::cout; //#
    template<typename Elem, size_t SZ> std::ostream& operator<<(std::ostream&os, const array<Elem,SZ>&data) { for(auto &e : data) { os << e << ' '; } return os; } //#
    int main() { //#
    array<int,5> data{ 10, 11, 12, 13, 14};
    cout << std::get<2>(data) << '\n'; // 12
    //= 12
    } //#


