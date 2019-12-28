    #include <iostream> //#
    #include <string> //#
    #include <algorithm> //#
    #include <tuple> //#
    using std::tuple; using std::make_tuple; using std::get; using std::cout; using std::string; //#
    auto praeser(int jahr) { //#
      using namespace std::literals; //#
      if(jahr>=2017) //#
        return make_tuple("Frank-Walter"s, "Steinmeier"s, "SPD"s, 1956); //#
      if(jahr>=2012) //#
        return make_tuple("Joachim"s, "Gauck"s, "-"s, 1940); //#
      // ... //#
    } //#
    // ... wie zuvor ...
    int main() {
      tuple<string,string,string,int> ps = praeser(2015);
      cout << get<int>(ps) << '\n'; // Ausgabe: 1940
      //= 1940
    #if 0 //#
      cout << get<string>(ps) << '\n'; // nicht eindeutig
    #endif //#
    }

