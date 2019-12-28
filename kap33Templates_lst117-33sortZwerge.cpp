    #include <set> //#
    #include <string> //#
    #include <iostream> //#
    using std::string; using std::set; using std::cout; //#
    struct Zwerg { string name_; unsigned jahr_; }; //#
    bool operator<(const Zwerg& a, const Zwerg& b) { //#
        return a.name_ < b.name_; //#
    } //#
    struct NachJahr { //#
        bool operator()(const Zwerg& a, const Zwerg& b) const { //#
            return a.jahr_ < b.jahr_; //#
        } //#
    }; //#
    int main() { //#
        set<Zwerg> zwerge{ Zwerg{"Balin", 2763}, Zwerg{"Dwalin", 2772}, //#
            Zwerg{"Oin", 2774}, Zwerg{"Gloin", 2783}, Zwerg{"Thorin", 2746}, //#
            Zwerg{"Fili", 2859}, Zwerg{"Kili", 2864} }; //#
    //#
    set<Zwerg,NachJahr> zwerge2{begin(zwerge), end(zwerge)};
    for(const auto& z : zwerge2) // anders sortierte Ausgabe
        cout << z.jahr_ << " ";
    //= 2746 2763 2772 2774 2783 2859 2864
    }//#

