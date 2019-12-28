    #include <unordered_set> //#
    #include <iostream> //#
    using std::unordered_set; using std::cout; //#
    template<typename Elem, typename Comp> //#
    std::ostream& operator<<=(std::ostream&os, const unordered_set<Elem,Comp>&data) { //#
        for(auto &e : data) { os << e << ' '; } return os << '\n'; } //#
    int main() { //#
    // bef?llen mit 100 Werten
    unordered_set<int> d{};
    d.rehash(10); // versuche 10 Eimer zu haben
    d.max_load_factor(100.0); // 100 Elemente pro Eimer sind okay
    cout << "Eimer Anzahl: " << d.bucket_count() << '\n';
    //= Eimer Anzahl: 11
    for(int x=0; x<100; ++x) {
        d.insert(x);
    }

    // ausgeben
    for(int b = d.bucket_count()-1; b>=0; --b) {
        cout << "Eimer "<<b<<":";
        for(auto it=d.begin(b); it!=d.end(b); ++it)
            cout << *it << ' ';
        cout << '\n';
    }
    //= Eimer 10:98 87 76 65 54 43 32 21 10
    //= Eimer 9:97 86 75 64 53 42 31 20 9
    //= Eimer 8:96 85 74 63 52 41 30 19 8
    //= Eimer 7:95 84 73 62 51 40 29 18 7
    //= Eimer 6:94 83 72 61 50 39 28 17 6
    //= Eimer 5:93 82 71 60 49 38 27 16 5
    //= Eimer 4:92 81 70 59 48 37 26 15 4
    //= Eimer 3:91 80 69 58 47 36 25 14 3
    //= Eimer 2:90 79 68 57 46 35 24 13 2
    //= Eimer 1:89 78 67 56 45 34 23 12 1
    //= Eimer 0:99 88 77 66 55 44 33 22 11 0
    } //#

