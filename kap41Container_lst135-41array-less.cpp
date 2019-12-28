    #include <array> //#
    #include <iostream> //#
    using std::array; using std::cout; //#
    template<typename Elem, size_t SZ> std::ostream& operator<<(std::ostream&os, const array<Elem,SZ>&data) { for(auto &e : data) { os << e << ' '; } return os; } //#
    void alle(const array<int,4>& a, const array<int,4>& b) {
         cout << "{"<<a<<"} verglichen mit {"<<b<<"} ist "
           << (a < b ? "<, " : "")
           << (a <= b ? "<=, " : "")
           << (a > b ? ">, " : "")
           << (a >= b ? ">=, " : "")
           << (a == b ? "==, " : "")
           << (a != b ? "!=, " : "")
           << '\n';
    }

    int main() {
        array<int,4> a{10,10,10,10};
        array<int,4> b{20, 5, 5, 5};
        array<int,4> c{10,10,5,21};
        array<int,4> d{10,10,10,10};
        cout << (a < b ? "kleiner\n" : "nicht kleiner\n"); // "kleiner", weil 10 < 20
        //= kleiner
        cout << (a < c ? "kleiner\n" : "nicht kleiner\n"); // "nicht...", weil nicht 10 < 5
        //= nicht kleiner
        cout << (a == d? "gleich\n" : "nicht gleich\n");   // "gleich", weil alles 10
        //= gleich
        for(auto &x : {a,b,c}) {
            for(auto &y : {a,b,c}) {
                alle(x,y);
            }
        }
        //= {10 10 10 10 } verglichen mit {10 10 10 10 } ist <=, >=, ==,
        //= {10 10 10 10 } verglichen mit {20 5 5 5 } ist <, <=, !=,
        //= {10 10 10 10 } verglichen mit {10 10 5 21 } ist >, >=, !=,
        //= {20 5 5 5 } verglichen mit {10 10 10 10 } ist >, >=, !=,
        //= {20 5 5 5 } verglichen mit {20 5 5 5 } ist <=, >=, ==,
        //= {20 5 5 5 } verglichen mit {10 10 5 21 } ist >, >=, !=,
        //= {10 10 5 21 } verglichen mit {10 10 10 10 } ist <, <=, !=,
        //= {10 10 5 21 } verglichen mit {20 5 5 5 } ist <, <=, !=,
        //= {10 10 5 21 } verglichen mit {10 10 5 21 } ist <=, >=, ==,
    }

