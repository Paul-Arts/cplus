    #include <vector>
    #include <iostream>
    using std::vector; using std::cout;
    template<typename Elem>
    std::ostream& operator<<(std::ostream&os, const vector<Elem>&data) {
        for(auto &e : data) {
            os << e << ' ';
        }
        return os;
    }
    int main() {
       // Beispielcode hier
       cout << vector<int>{1,2,3} << '\n'; //#
       //= 1 2 3
    }


