    #include <unordered_set> //#
    #include <iostream> //#
    using std::unordered_set; using std::cout; //#
    template<typename Elem, typename Comp> //#
    std::ostream& operator<<=(std::ostream&os, const unordered_set<Elem,Comp>&data) { //#
        for(auto &e : data) { os << e << ' '; } return os << '\n'; } //#
    int main() { //#
    unordered_set<int> nums{ 1,2,3,4,5,6,7,8,9,10 };
    cout <<= nums;               // Ausgabe ?hnlich: 9 1 2 3 4 5 6 7 8 10
    //#= 9 1 2 3 4 5 6 7 8 10
    //= 10 9 8 7 6 5 4 3 2 1

    auto it = nums.begin();
    while(it != nums.end()) {
        if(*it % 2 == 0) {       // gerade Zahl?
            it = nums.erase(it); // Restelemente ver?ndern nicht Reihenfolge
        } else {
            ++it;
        }
    }
    cout <<= nums;               // Ausgabe ?hnlich: 9 1 3 5 7
    //#= 9 1 3 5 7
    //= 9 7 5 3 1
    } //#

