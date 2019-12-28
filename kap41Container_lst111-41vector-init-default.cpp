    #include <vector> //#
    #include <iostream> //#
    using std::vector; using std::cout; //#
    int main() { //#
    vector<int> dataA;
    vector<int> dataB{};
    vector<int> dataC = {};   // keine Zuweisung
    cout << dataA.size() <<' '<< dataB.size() <<' '<< dataC.size() <<'\n'; // 0 0 0
    //= 0 0 0
    } //#

