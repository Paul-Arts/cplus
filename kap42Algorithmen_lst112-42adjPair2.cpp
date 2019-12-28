    #include <vector>
    #include <iostream>
    template<typename It, typename Func> //#
    void adjacent_pair(It begin, It end, Func func) { //#
        if(begin != end) { //#
            It prev = begin; // erstes Argument //#
            ++begin; // zweites Argument //#
            for(; begin != end; ++begin, ++prev) { //#
                func(*prev, *begin); //#
            } //#
        } //#
    } //#
    // ... adjacent_pair von oben hier ...
    int main() {
        std::vector<int> v{1,2,3,4};
        auto f = [](auto a, auto b) { std::cout << (a+b) << ' '; };
        adjacent_pair(v.begin(), v.end(), f); // 3 5 7
        std::cout << '\n';
        //= 3 5 7

        std::vector<int> x{4,8};
        adjacent_pair(x.begin(), x.end(), f); // 12
        std::cout << '\n';
        //= 12

        std::vector<int> w{4};
        adjacent_pair(w.begin(), w.end(), f); // nichts
        std::cout << '\n';
        //=

        std::vector<int> y{};
        adjacent_pair(y.begin(), y.end(), f); // nichts
        std::cout << '\n';
        //=
    }

