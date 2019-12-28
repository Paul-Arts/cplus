    #include <map> //#
    #include <iostream> //#
    #include <string>     //#
    using std::map; using std::cout; using std::string; //#
    int main() { //#
    map<char,int> data { { 'a',1}, {'b',2}, {'c',3} };
    for(auto it=data.rbegin(); it!=data.rend(); ++it) {  // r?ckw?rts
        cout << it->first << ':' << it->second << ' ';   // Iterator mit -> dereferenzieren
    }
    cout << '\n'; // Ausgabe: c:3 b:2 a:1
    //= c:3 b:2 a:1
    for(auto &e : data) {                          // vorw?rts, nimmt begin() und end()
        cout << e.first << ':' << e.second << ' '; // Paar mit . zugreifen
    }
    cout << '\n'; // Ausgabe: a:1 b:2 c:3
    //= a:1 b:2 c:3
    } //#



