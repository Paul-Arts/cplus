    #include <vector> //#
    #include <iostream> //#
    using std::vector; using std::cout; //#
    std::ostream& operator<<(std::ostream&os, const vector<int>&data) { for(auto &e : data) os << e << ' '; return os; } //#
    int main() { //#
    vector<char> vokale { 'A', 'e', 'i', 'o', 'u' };
    const vector<char> gerade { '0', '2', '4', '6', '8' };

    auto it1 = vokale.begin();                  // vector<char>::iterator
    *it1='a'; // liefert 'char&' zur?ck

    auto it2 = gerade.begin();                  // vector<char>::const_iterator
    auto it3 = vokale.cbegin();                 // erzwingt const_iterator
    #if 0 //#
    *i2='9'; *i3='x';                           // 'const char&' ist nicht ver?nderbar
    #endif //#

    for(auto it=vokale.cbegin()+1; it!=vokale.cend(); ++it)
        { cout << *it; } cout << '\n';          // Ausgabe: eiou
    //= eiou
    for(auto it=vokale.crbegin()+1; it!=vokale.crend(); ++it) // ++ trotz reverse!
        { cout << *it; } cout << '\n';          // Ausgabe: oiea
    //= oiea
    } //#

