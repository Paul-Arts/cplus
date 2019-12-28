    #include <chrono>
    #include <iostream>
    using namespace std::chrono; using std::cout;
    using seconds32 = duration<int32_t>;            // andere Repr?sentation
    using week = duration<int,std::ratio<86400*7>>; // andere Zeiteinheit
    using fseconds = duration<double>;              // Flie?komma-Repr?sentation
    int main() {
      seconds32 s{5};
      cout << milliseconds(s).count() << "ms\n";
      //= 5000ms
      week w{1};
      hours h = w; // Umwandlung kostenlos
      cout << "1 Woche hat "<<h.count()<<" Stunden\n";                // ...168...
      //= 1 Woche hat 168 Stunden
      fseconds fs{23.75};
      cout << fs.count() << "s\n"; // Flie?kommaausgabe
      //= 23.75s
      auto printDur = [](fseconds f) { cout << f.count() << "s\n"; }; // Funktion
      printDur(45ms + 63us); // Umwandlung in fseconds
      // Ausgabe: 0.045063s
      //= 0.045063s
    }

