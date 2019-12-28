    #include <valarray> //#
    #include <iostream> //#
    using namespace std; //#
    template<typename T> //#
    ostream& operator<<=(ostream &os, const valarray<T>& a) { //#
        for(const auto &v : a) os << v << ' '; //#
        return os << '\n'; //#
    } //#
    int main() { //#
    valarray<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    valarray<int> r1(v[slice(0, 4, 3)]); // Start bei 0, 4 Elemente, Schrittweite 3
    cout <<= r1;                         // Ausgabe: 1 4 7 10
    //= 1 4 7 10

    valarray<int> r2(v[v > 6]);          // adressiert per valarray<bool>
    cout <<= r2;                         // Ausgabe: 7 8 9 10 11 12
    //= 7 8 9 10 11 12

    const valarray<size_t> indirekt{ 2, 2, 3, 6 };  // doppelte erlaubt
    valarray<int> r5(v[indirekt]);   // adressiert per valarray<size_t>
    cout <<= r5;                         // Ausgabe: 3 3 4 7
    //= 3 3 4 7
    } //#


