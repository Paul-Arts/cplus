    #include <set>     //#
    #include <iostream> //#
    #include <string>
    #include <iterator> // distance
    struct Person {
      std::string name;
      friend bool operator<(const Person &a, const Person &b) {// nur erster Buchstabe
        return a.name.size()==0 ? true
          : (b.name.size()==0 ? false : a.name[0] < b.name[0]);
      }
    };
    // ...
    using std::multiset; using std::cout; //#
    template<typename Elem, typename Comp> //#
    std::ostream& operator<<=(std::ostream&os, const multiset<Elem,Comp>&data) { //#
      for(auto &e : data) os << e << ' '; return os << '\n'; } //#
    int main() { //#
    multiset<int> data{ 1, 4,4, 2,2,2, 7, 9 };
    auto wo = data.equal_range(2);
    cout << "Anzahl 2en: "
      << std::distance(wo.first, wo.second) << '\n'; // Ausgabe: Anzahl 2en: 3
    //= Anzahl 2en: 3
    wo = data.equal_range(5);
    cout << "Anzahl 5en: "
      << std::distance(wo.first, wo.second) << '\n'; // Ausgabe: Anzahl 5en: 0
    //= Anzahl 5en: 0
    multiset<Person> raum{
      Person{"Karl"}, Person{"Kurt"}, Person{"Peter"}, Person{"Karl"}, Person{"Ken"} };
    auto ks = raum.equal_range(Person{"K"});
    for( ; ks.first != ks.second; ++ks.first) {
      cout << ks.first->name << ' ';
    }
    cout << '\n'; // Ausgabe: Karl Kurt Karl Ken
    //= Karl Kurt Karl Ken
    } //#

