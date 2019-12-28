    #include <string>
    #include <set>
    #include <iostream>
    #include <tuple> // tuple, tie
    using std::string; using std::set; using std::cout; using std::tie;

    struct Hobbit {
           string vorname;
           string nachname;
           Hobbit(const string v, const string n) : vorname{v}, nachname{n} {}
    };

    struct CompNachname {
      bool operator()(const Hobbit& x, const Hobbit& y) const { // normales <
        return tie(x.nachname, x.vorname) < tie(y.nachname, y.vorname);
      }
      using is_transparent = std::true_type; // f?r find erlaubt
      bool operator()(const Hobbit& x, const string& y) const { // f?r find, etc.
        return x.nachname < y;
      }
      bool operator()(const string& x, const Hobbit& y) const { // f?r find, etc.
        return x < y.nachname;
      }
    };
    int main() {
        using namespace std::literals; // erlaube "..."s
        set<Hobbit,CompNachname> hobbits;
        hobbits.emplace( "Frodo", "Baggins" );
        hobbits.emplace( "Sam", "Gamgee" );
        auto f1 = hobbits.find( Hobbit{"Frodo", "Baggins"} ); // ganzer Schl?ssel
        if(f1 != hobbits.end()) {
            cout << "gefunden: " << f1->vorname << '\n';      // Frodo
        }
        //= gefunden: Frodo
        auto f2 = hobbits.find( "Gamgee"s );                  // ?quivalenter Schl?ssel
        if(f2 != hobbits.end()) {
            cout << "gefunden: " << f2->vorname << '\n'; // Sam
        }
        //= gefunden: Sam
    }

