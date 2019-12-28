    #include <vector>
    #include <iostream>                         // cout, endl
    int main() {
        std::vector<int> quadrate{1,4,9,16,25}; // gef?llt initialisieren
        for(int zahl : quadrate)  // zahl ist ein Quadrat nach dem anderen
            std::cout << zahl << " ";
        std::cout << std::endl;
        //= 1 4 9 16 25
    }


