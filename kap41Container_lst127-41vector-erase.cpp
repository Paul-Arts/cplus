    #include <vector> //#
    #include <iostream> //#
    using std::vector; using std::cout; //#
    template<typename T> std::ostream& operator<<=(std::ostream&os, const vector<T>&data)  { for(auto &e : data) os << e << ' '; return os << '\n'; } //#
    template<typename T> std::ostream& operator<<=(std::ostream&os, const T&e) { return os << e << '\n'; } //#
    int main() { //#
    std::vector<int> v{ 1, 2, 3, 4, 5, 6 };
    v.erase(v.begin()+1, v.begin()+5); // v ist nun {1, 6}
    cout <<= v; //= 1 6
    v.erase(v.begin(), v.end());       // l?scht den Rest
    cout <<= v.size(); //= 0
    } //#

