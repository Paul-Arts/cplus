    #include <iostream> //#
    using std::cout; //#
    int main() { //#
    int value = 42;
    int& valueRef = value; // Referenz; kein Adressoperator & n?tig
    valueRef = 18;         // kein Dereferenzierungsoperator * n?tig
    cout << value << "\n"; // Ausgabe: 18
    //= 18
    } //#

