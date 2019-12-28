    #include <vector> //#
    #include <iostream> //#
    #include <string> //#
    using std::vector; using std::cout; using std::string; //#
    int main() { //#
    vector<string> autos{ "Diesel", "Benzin", "Super", "Gas" };
    cout << autos[1] << '\n';             // "Benzin"
    //= Benzin
    autos.insert(autos.begin(), "Strom"); // verschiebt alles um eins nach hinten
    cout << autos[1] << '\n';             // "Diesel"
    //= Diesel
    } //#

