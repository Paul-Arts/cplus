    #include <deque>
    #include <iostream>
    #include <iterator> // ostream_iterator
    #include <algorithm> // copy

    using std::cout; using std::ostream; using std::ostream_iterator; using std::copy;
    ostream& operator<<=(ostream& os, int val) { return os<<val<<'\n'; }

    int main() {
        std::deque<int> d{ 4, 6 }; // mit Elementen erzeugen
        // Einf?gen
        d.push_front(3);           // am Kopf: effizient
        d.insert(d.begin()+2, 5);  // mittendrin: langsam
        d.push_back(7);            // am Ende: effizient
        // Zugriff
        cout <<= d.front();        // vom Kopf: effizient
        //= 3
        cout <<= d[3];             // mittendrin: effizient
        //= 6
        cout <<= d.back();         // vom Ende: effizient
        //= 7
        // Gr??e
        cout <<= d.size();         // Gr??e lesen
        //= 5
        d.resize(4);               // Gr??e kappen (oder erweitern)
        // Iteratoren
        copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
        cout << '\n';              // Ausgabe: 3 4 5 6
        //= 3 4 5 6
        // Entfernen
        d.pop_front();             // am Kopf: effizient
        d.erase(d.begin()+1);      // mittendrin: langsam
        d.pop_back();              // am Ende: effizient
        d.clear();                 // leeren
    }

