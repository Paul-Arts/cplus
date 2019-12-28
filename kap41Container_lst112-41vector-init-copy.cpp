    #include <vector> //#
    #include <iostream> //#
    using std::vector; using std::cout; //#
    auto zaehle(vector<int> arg) { return arg.size(); }
    // ...
    int main() { //#
    vector<int> input{1,2,3};
    vector<int> outputA(input);    // Kopie
    vector<int> outputB = input;   // auch Kopie, keine Zuweisung
    cout << zaehle(input) << '\n'; // Aufruf per Copy-by-Value
    //= 3
    } //#

