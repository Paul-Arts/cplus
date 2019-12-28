    #include <functional> // function
    #include <iostream> //#
    int berechne(int a, int b, std::function<int(int,int)> binop) {
        return binop(a,b);
    }
    int main() { //#
        std:: cout << [](int a, int b) { return a+b; }(3, 4) << "\n"; //#
        //= 7
        std:: cout << [](int a, int b) { return a*b; }(3, 4) << "\n"; //#
        //= 12
    } //#

