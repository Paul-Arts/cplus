    #include <vector> //#
    #include <iostream> //#
    using std::vector; using std::cout; //#
    int main() { //#
    vector<int> d{ 1, 2, 4, -1, 1, 2, -2 };
    for(size_t idx=0; idx<d.size(); ) { // pr?ft vector-Grenze
        cout << d[idx] << ' ';          // zus?tzliche Pr?fung mit at nicht n?tig
        idx += d[idx];                  // hier ebensowenig
    }
    cout << '\n';
    // Ausgabe: 1 2 -1 4 -2 1 2
    //= 1 2 -1 4 -2 1 2
    } //#

