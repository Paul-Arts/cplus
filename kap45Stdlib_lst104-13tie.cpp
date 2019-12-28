    #include <iostream> //#
    #include <string>  //#
    #include <tuple> //#
    using std::tuple; using std::make_tuple; using std::cout; using std::string; //#
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
      using std::tie; using std::ignore;
      string nachname {};
      int gebj {};
      tie(ignore, nachname, ignore, gebj) = praeser(2015);
      cout << nachname << ' ' << gebj << '\n'; // Ausgabe: Gauck 1940
      //= Gauck 1940
    }

