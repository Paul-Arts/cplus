    #include <vector> //#
    #include <iostream> //#
    using std::vector; using std::cout; //#
    template<typename T> std::ostream& operator<<=(std::ostream&os, const vector<T>&data) { for(auto &e : data) os << e << ' '; return os << '\n'; } //#
    template<typename T> std::ostream& operator<<=(std::ostream&os, const T&e) { return os << e << '\n'; } //#
    int main() { //#
    std::vector<int> v{ 1, 2, 3, 4, 5, 6 };
    for(auto it=v.begin(); it!=v.end(); ++it) {
      it = v.erase(it);
    }
    // Hier ist v: { 2, 4, 6 }
    cout <<= v; //= 2 4 6
    } //#

