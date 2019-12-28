    #include <iostream>
    #include <memory> // uninitialized_copy
    #include <alloca.h>   // alloca (Linux)
    #include <list>
    int main () {
      const std::list<int> input{1,9,2,6,6,6,8};
      const auto SZ = input.size();
      // unitialisierter Speicherbereich:
      int* ziel = (int*)alloca(sizeof(int) * SZ); // Platz f?r 7 ints
      std::uninitialized_copy(input.begin(), input.end(), ziel);
      // Testausgabe
      for(int idx=0; idx<SZ; ++idx) {
        std::cout << ziel[idx] << ' ';
      }
      std::cout << '\n'; // Ausgabe: 1 9 2 6 6 6 8
      //= 1 9 2 6 6 6 8
    }

