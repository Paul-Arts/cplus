    #include <set> //#
    #include <iostream> //#
    #include <tuple> // tie
    // ...
    using std::cout; using std::ostream; using std::set; using std::pair; //#
    template<typename E, typename C> ostream& operator<<=(ostream&os, const set<E,C> &data) //#
      { for(auto &e:data) os<<e<<' '; return os<<'\n'; } //#
    template<typename IT> ostream& operator<<(ostream& os,const pair<IT,bool> wo)
      { return os << (wo.second ? "ja" : "nein"); }

    struct Punkt {
        double x_, y_;
        Punkt(double x, double y) : x_{x}, y_{y} {}
        friend bool operator<(const Punkt &a, const Punkt &b) { // f?r set ben?tigt
            return std::tie(a.x_, a.y_) < std::tie(b.x_, b.y_); // tuple nutzen
        }
        friend ostream& operator<<(ostream &os, const Punkt &a) {
            return os << "(" << a.x_ << ',' << a.y_<< ")";
        }
    };

    int main() {
        set<int> data{ 10, 20, 30, 40, 50, 60, 70 };
        auto wo = data.insert(35);         // f?gt zwischen 30 und 40 ein
        cout << "neu? " << wo << '\n';     // Ausgabe: neu? ja
        //= neu? ja
        wo = data.insert(40);              // gibt es schon, f?gt also nicht ein
        cout << "neu? " << wo << '\n';     // Ausgabe: neu? nein
        //= neu? nein
        set<Punkt> punkte{};
        punkte.insert( Punkt{3.50,7.25} ); // tempor?rer Wert
        punkte.emplace(1.25, 2.00);        // Konstruktorargumente
        cout <<= punkte;                   // Ausgabe: (1.25,2) (3.5,7.25)
        //= (1.25,2) (3.5,7.25)
    }

