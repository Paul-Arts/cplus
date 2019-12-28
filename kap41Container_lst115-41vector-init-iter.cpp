    #include <vector> //#
    #include <iostream> //#
    #include <deque>
    // ...
    using std::vector; using std::cout; //#
    int main() { //#
    std::deque<int> in{1,2,33,34,35,99};
    vector<int> dreissig(in.begin()+2, in.begin()+5);
    for(auto &e : dreissig) {
        cout << e << ' ';
    }
    cout << '\n';
    //= 33 34 35
    } //#

