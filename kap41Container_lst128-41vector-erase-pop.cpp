    #include <vector> //#
    #include <iostream> //#
    using std::vector; using std::cout; //#
    template<typename T> //#
    std::ostream& operator<<(std::ostream&os, const vector<T>&data) { for(auto &e : data) os << e << ' '; return os; } //#
    int main() { //#
    std::vector<int> v{ 1, 2, 3 };
    v.pop_back();                           // v wird zu {1, 2}
    cout << v << '\n'; //#
    //# 1 2
    } //#


