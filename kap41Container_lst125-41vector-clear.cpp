    #include <vector> //#
    #include <iostream> //#
    using std::vector; using std::cout; //#
    template<typename T> std::ostream& operator<<=(std::ostream&os, const vector<T>&data) { for(auto &e : data) os << e << ' '; return os << '\n'; } //#
    template<typename T> std::ostream& operator<<=(std::ostream&os, const T&e) { return os << e << '\n'; } //#
    int main() { //#
    std::vector<int> v{ 1, 2, 3 };
    v.clear();                              // nun ist v leer
    cout <<= v.size(); //= 0
    cout << "abc" << "def" << "ghi" << "hkl" <<= "mno"; //# just testing <<=
    //= abcdefghihklmno
    } //#

