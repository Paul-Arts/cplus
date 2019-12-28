    #include <array> //#
    #include <iostream> //#
    using std::array; using std::cout; //#
    template<typename Elem, size_t SZ> std::ostream& operator<<(std::ostream&os, const array<Elem,SZ>&data) { for(auto &e : data) { os << e << ' '; } return os; } //#
    int main() { //#
    array<int,4> data{ 1,4,69, 3};
    data.fill(8); //  nun {8, 8, 8, 8}
    cout << data << '\n'; //#
    //= 8 8 8 8
    } //#


