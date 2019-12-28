    #include <vector>
    #include <iostream>
    #include <algorithm>
    using std::vector; using std::ostream; using std::cout;
    int main() {
        vector<int> data{};
        data.reserve(400);                    // Platz f?r 400 Elemente
        // Phase 1: bef?llen
        for(int idx = 1; idx <= 20; ++idx) {
            for(int val = 0; val < 20; ++val) {
                data.push_back(val % idx);    // irgendwas zwischen 0..19
            }
        }
        cout << data.size() << '\n';          // 400 Elemente zwischen 0..19
        //= 400
        // Nachbereitung Phase 1: set-?quivalent erstellen
        std::sort(data.begin(), data.end());  // Vorbereitung f?r unique
        auto wo = std::unique(data.begin(), data.end()); // doppelte ans Ende
        data.erase(wo, data.end());           // doppelte wegr?umen
        data.shrink_to_fit();
        cout << data.size() << '\n';          // nur noch 20 Elemente
        //= 20
        // Phase 2: benutzen
        for(auto &e:data)
            cout << e << ' ';                 // Ausgabe: 0 1 2 .. 18 19
        cout << '\n';
        //= 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
        auto it = std::lower_bound(data.begin(), data.end(), 16); // suche Wert
        if(it!=data.end() && *it == 16)
            cout << "gefunden!\n";
        //= gefunden!
        if(std::binary_search(data.begin(), data.end(), 7))       // ja oder nein
            cout << "auch gefunden!\n";
        //= auch gefunden!
    }

