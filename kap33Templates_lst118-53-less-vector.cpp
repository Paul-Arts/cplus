    #include <vector>
    #include <string> //#
    #include <algorithm> // sort
    #include <iostream>  //# cout
    using std::string; using std::vector; using std::cout; //#
    // Defintionen und weitere Includes wie zuvor
    struct Zwerg { string name_; unsigned jahr_; }; //#
    bool operator<(const Zwerg& a, const Zwerg& b) { return a.name_ < b.name_; } //#
    int main() {
        vector<Zwerg> zwerge{       // initialisieren wie zuvor
            Zwerg{"Balin", 2763}, Zwerg{"Dwalin", 2772}, //#
            Zwerg{"Oin", 2774}, Zwerg{"Gloin", 2783}, Zwerg{"Thorin", 2746}, //#
            Zwerg{"Fili", 2859}, Zwerg{"Kili", 2864} }; //#
        /* sortieren */
        std::sort(begin(zwerge), end(zwerge));
        // ausgeben wie zuvor ...
        for(const auto& z : zwerge) // sortierte Ausgabe: "Balin" bis "Thorin" //#
            cout << z.name_  << " "; //#
        cout << "\n"; //#
        //= Balin Dwalin Fili Gloin Kili Oin Thorin
    } //#

