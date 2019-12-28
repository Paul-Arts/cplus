    #include <functional> // function
    #include <iostream>   // cout
    int berechne(int a, int b, std::function<int(int,int)> binop) {
        return binop(a,b);
    }
    int plus(int a, int b) { return a+b; }
    int mal(int a, int b) { return a*b; }
    int main() {
        std::cout << berechne(3, 4, plus) << "\n";  // Wert-Schreibweise
        //= 7
        std::cout << berechne(3, 4, mal) << "\n";   // Wert-Schreibweise
        //= 12
        std::cout << berechne(3, 4, &plus) << "\n"; // Zeiger-Schreibweise
        //= 7
        std::cout << berechne(3, 4, &mal) << "\n";  // Zeiger-Schreibweise
        //= 12
    }

