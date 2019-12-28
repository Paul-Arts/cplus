    #include <random> //#
    #include <iostream> //#
    int main() { //#
    std::default_random_engine engine{}; //#
    std::uniform_int_distribution<int> w6{0, 5}; //#
    auto w = [&]() { return w6(engine); };
    std::cout << w() << '\n';
    //= 0
    } //#

