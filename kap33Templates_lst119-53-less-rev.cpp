    #include <vector>
    #include <string>
    #include <algorithm> // sort
    #include <iostream>  // cout
    using std::string; using std::vector; using std::cout;
    // wie zuvor
    struct Zwerg { string name_; unsigned jahr_; }; //#
    bool operator<(const Zwerg& a, const Zwerg& b) { return a.name_ < b.name_; } //#
    int main() {
        vector<Zwerg> zwerge{    // wie zuvor
            Zwerg{"Balin", 2763}, Zwerg{"Dwalin", 2772}, //#
            Zwerg{"Oin", 2774}, Zwerg{"Gloin", 2783}, Zwerg{"Thorin", 2746}, //#
            Zwerg{"Fili", 2859}, Zwerg{"Kili", 2864} }; //#
        /* sortieren */
        bool rueckwaerts = true; // oder false. Variable au?erhalb des Lambdas
        std::sort(begin(zwerge), end(zwerge),
            [rueckwaerts](const Zwerg& a, const Zwerg& b) {
                if(rueckwaerts)
                    return a.name_ > b.name_;
                else
                    return a.name_ < b.name_;
            }
        );
        /* ausgeben */
        for(const auto& z : zwerge) // r?ckw?rts: "Thorin" bis "Balin"
            cout << z.name_  << " ";
        cout << "\n";
        //= Thorin Oin Kili Gloin Fili Dwalin Balin
    }

