    #include <future> // async
    #include <vector>
    #include <algorithm> // max
    #include <iostream>
    //# int kgt(int a, int b) { return b == 0 ? a : kgt(b, a % b); }

    int berechneHoehe(int count, int maxCount, int scale) {
      if(maxCount == 0)
          throw std::logic_error("Alle Hoehen 0");
      return (count * scale) / maxCount;
    }

    void balken(const std::vector<int> &counts) {
      // Berechung starten
      auto maxCount = *std::max_element(counts.begin(), counts.end());

      std::vector< std::future<int> > futs;
      for(int count : counts) {
        futs.push_back(
              std::async(std::launch::async,
                  berechneHoehe, count, maxCount, 200) );
      }
      // Ergebnisse einsammeln
      for(auto &fut : futs) {
        std::cout << fut.get() << ' ';                // l?st Exception aus
      }
      std::cout << '\n';
    }

    int main() {
      try {
        balken(std::vector<int> {10,23,13,0,33,4 });  // Ausgabe: 60 139 78 0 200 24
        //= 60 139 78 0 200 24
        balken(std::vector<int> { 0, 0, 0, 0 });      // l?st Exception aus
      } catch(std::exception &ex) {
        std::cout << "Fehler: " << ex.what() << '\n'; // Ausgabe: Fehler: Alle Hoehen 0
        //= Fehler: Alle Hoehen 0
      }
    }

