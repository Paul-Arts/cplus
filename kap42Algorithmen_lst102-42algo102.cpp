    #include <iostream> //#
    #include <vector> //#
    #include <algorithm> //#
    int main() { //#
    std::vector<int> v{0,1,3,5,7,9,2,4,6,8};
    std::sort(v.begin(), v.end());
    for(int i:v) std::cout << i << ' ';
    //= 0 1 2 3 4 5 6 7 8 9
    std::cout << '\n'; //#
    } //#


