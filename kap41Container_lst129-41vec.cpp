    #include <vector>
    #include <iostream>
    using namespace std;

    ostream& operator<<(ostream&os, const vector<int> &vec) {
        for(auto &elem : vec) { os << elem << ' '; }
        return os;
    }
    int main() {
        vector<int> data {};     // erzeugt einen leeren vector
        data.reserve(3);         // Platz f?r 3 Elemente
        cout << data.size() << '/' << data.capacity() << '\n'; // 0/3
        //= 0/3
        data.push_back(111);     // ein Element hinzuf?gen
        data.resize(3);          // Gr??e ver?ndern; hier f?gt es neue Elemente an
        data.push_back(999);     // noch ein Element hinzuf?gen
        cout << data.size()<<'/'<<data.capacity()<<'\n'; // 4/6; Kapazit?t erh?ht
        //= 4/6
        cout << data << '\n';    // 111, 0, 0, 999
        //= 111 0 0 999
        data.push_back(333);     // noch ein Element anf?gen
        cout << data << '\n';    // 111, 0, 0, 999, 333
        //= 111 0 0 999 333
        data.reserve(1);         // nichts passiert, denn capacity() > 1
        data.resize(3);          // schrumpfen; Elemente werden entfernt
        cout << data << '\n';    // 111, 0, 0
        //= 111 0 0
        cout << data.size()<<'/'<<data.capacity()<<'\n'; // 3/6; Kapazit?t immer noch 6
        //= 3/6
        data.resize(6, 44);      // noch mal vergr??ern, mit 44en auff?llen
        cout << data << '\n';    // 111, 0, 0, 44, 44, 44
        //= 111 0 0 44 44 44
    }



