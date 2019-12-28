    #include <set> //#
    #include <iostream> //#
    using std::cout; using std::ostream; using std::set; //#
    template<typename E, typename C> ostream& operator<<=(ostream&os, const set<E,C> &data) //#
      { for(auto &e:data) os<<e<<' '; return os<<'\n'; } //#
    int main() { //#
    set<int> data{ 10, 20, 30, 40, 50, 60, 70 };
    set<int> ziel;
    auto hinweis = ziel.begin();
    for(auto &e : data) {
        hinweis =                    // Einf?geposition in n?chster Runde nutzen
            ziel.insert(hinweis, e); // Hinweis hilft, weil data sortiert ist
    }
    } //#

