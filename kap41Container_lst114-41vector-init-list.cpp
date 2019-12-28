    #include <vector> //#
    #include <iostream> //#
    using std::vector; using std::cout; //#
    int main() { //#
    vector<int> prims{ 2,3,5,7,11 };
    #if 0 //#
    vector<int> soNicht{ 'a', 4.3, 8L }; // "Narrowing" double nicht okay
    #else //#
    vector<int> soNicht{ 'a', 8L }; //#
    #endif //#
    } //#

