    #include <valarray>
    #include <iostream>
    using namespace std;
    template<typename T>
    ostream& operator<<=(ostream &os, const valarray<T>& a) { // '<<=' mit Newline
        for(const auto &v : a) os << v << ' ';
        return os << '\n';
    }
    int main() {
        // ...Beispielcode hier...
        valarray<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }; //#
        cout <<= v; //#
        //= 1 2 3 4 5 6 7 8 9 10 11 12
    }



