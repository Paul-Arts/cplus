    #include <iostream>
    #include <typeinfo>
    #include <typeindex>
    #include <map>
    #include <string>
    struct Base {
        virtual ~Base() {}
    };
    struct Derived_One : public Base {};
    struct Derived_Two : public Base {};
    int main() {
      using std::string; using std::cout; using std::type_index;
      std::map<std::type_index, string> namen {
          { type_index(typeid(int)), "int" },
          { type_index(typeid(double)), "double" },
          { type_index(typeid(Base)), "Base" },
          { type_index(typeid(Derived_One)), "Derived_One" },
          { type_index(typeid(Derived_Two)), "Derived_Two" },
          { type_index(typeid(string)), "string" },
          { type_index(typeid(string::const_iterator)), "string" },
      };
      namen[type_index(typeid(namen))] = "namen-map";
      int ganz;
      double fliessend;
      Base base{};
      Base *one = new Derived_One{};
      Base *two = new Derived_Two{};
      // typeid.name() ist implementierungs- und laufzeitabh?ngig:
      cout << typeid(ganz).name() << '\n';      // Bei mir: i
      //= i
      cout << typeid(fliessend).name() << '\n'; // Bei mir: d
      //= d
      cout << typeid(base).name() << '\n';      // Bei mir: 4Base
      //= 4Base
      cout << typeid(*one).name() << '\n';      // Bei mir: 11Derived_One
      //= 11Derived_One
      cout << typeid(*two).name() << '\n';      // Bei mir: 11Derived_Two
      //= 11Derived_Two
      cout << typeid(string).name() << '\n';    // Bei mir: Ss
      //= Ss
      cout << typeid(string{"Welt"}.begin()).name() << '\n';
          // Bei mir: N9__gnu_cxx17__normal_iteratorIPcSsEE
      //= N9__gnu_cxx17__normal_iteratorIPcSsEE
      cout << typeid(namen).name() << '\n';
          // Bei mir: St3mapISt10type_indexSsSt4lessIS0_ESaISt4pairIKS0_SsEEE
      //= St3mapISt10type_indexSsSt4lessIS0_ESaISt4pairIKS0_SsEEE
      cout << typeid(666/0).name() << '\n';     // Ausdruck wird nicht ausgef?hrt! Bei mir: i
      //= i
      // type_index macht type_infos vergleichbar:
      cout << namen[type_index(typeid(ganz))] << '\n';      // Ausgabe: int
      //= int
      cout << namen[type_index(typeid(fliessend))] << '\n'; // Ausgabe: double
      //= double
      cout << namen[type_index(typeid(base))] << '\n';      // Ausgabe: Base
      //= Base
      cout << namen[type_index(typeid(*one))] << '\n';      // Ausgabe: Derived_One
      //= Derived_One
      cout << namen[type_index(typeid(*two))] << '\n';      // Ausgabe: Derived_Two
      //= Derived_Two
      cout << namen[type_index(typeid(string))] << '\n';    // Ausgabe: string
      //= string
      cout << namen[type_index(typeid(namen))] << '\n';     // Ausgabe: namen-map
      //= namen-map
    }

