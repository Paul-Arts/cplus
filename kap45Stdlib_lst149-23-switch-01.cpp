    #include <string>
    #include <vector>
    #include <iostream>
    #include <map>
    #include <functional>

    std::map<char,std::function<int(int,int)>> binOps { // zweistellige Operatoren
        {'+', std::plus<int>{} },
        {'-', std::minus<int>{} },
        {'*', std::multiplies<int>{} },
        {'/', std::divides<int>{} },
        {'%', std::modulus<int>{} },
        };

    std::map<char,std::function<int(int)>> unOps { };   // einstellige Operatoren

    auto val = [](auto n) { return [n](){ return n; };};// Lambda gibt ein Lambda zur?ck
    std::map<char,std::function<int()>> zeroOps {        // nullstellige Operatoren
      {'0', val(0)}, {'1', val(1)}, {'2', val(2)}, {'3', val(3)}, {'4', val(4)},
      {'5', val(5)}, {'6', val(6)}, {'7', val(7)}, {'8', val(8)}, {'9', val(9)},
      };

    std::map<char,std::function<void(std::vector<int>&)>> stapelOps { // ganzer Stapel
      { ' ', [](auto &stapel) { } },                    // keine Operation
      { 'c', [](auto &stapel) { stapel.clear(); } },    // Stapel ganz l?schen
      { ':', [](auto &stapel) {                   // obersten zwei Elemente vertauschen
                auto top = stapel.back(); stapel.pop_back();
                auto second = stapel.back(); stapel.pop_back();
                stapel.push_back(top);
                stapel.push_back(second);
      } },
      { '=', [](auto &stapel) {                         // ganzen Stapel ausgeben
                for(int elem : stapel) { std::cout << elem; }
                std::cout << "\n";
      } },
    };

    void rechner(std::string input) {
      std::vector<int> stapel {};
      for(char c : input) {
        int top, second;
        auto it0 = zeroOps.find(c);
        auto it1 = unOps.find(c);
        auto it2 = binOps.find(c);
        auto itS = stapelOps.find(c);
        if(it1 != unOps.end()) {                  // falls einstelliger Operator ...
          auto func = it1->second;
          top = stapel.back(); stapel.pop_back(); // ... hole oberstes Element
          stapel.push_back(func(top));            // ... wende func an, Ergebnis auf Stapel.
        } else if(it2 != binOps.end()) {          // falls zweistelliger Operator ...
          auto func = it2->second;
          top = stapel.back(); stapel.pop_back(); // ... hole obersten beiden Elemente
          second = stapel.back(); stapel.pop_back();
          stapel.push_back(func(second, top));    // ... wende func an, Ergebnis auf Stapel.
        } else if(it0 !=zeroOps.end()) {          // falls nullstelliger Operator ...
          auto func = it0->second;
          stapel.push_back(func());               // ... Ergebnis von func auf Stapel.
        } else if(itS !=stapelOps.end()) {        // falls Stapeloperator
          auto func = itS->second;
          func(stapel);                           // ... wende func auf Stapel an.
        } else {
          std::cout << "\n'" << c << "' verstehe ich nicht.\n";
        }
      } /* for c */
    }

    int main(int argc, const char* argv[]) {
        if(argc > 1) {
            rechner(argv[1]);
        } else {
            // 3+4*5+6 mit Punkt- vor Strichrechnung ergibt 29
            rechner("345*+6+=");
            //= 29
        }

        rechner("93-=");                     // 9 - 3 = Ausgabe: 6
        //= 6
        rechner("82/=");                     // 8 / 2 = Ausgabe: 4
        //= 4
        rechner("92%=");                     // 9 % 2 = Ausgabe: 1
        //= 1
    }







