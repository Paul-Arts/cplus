    #include <vector> //#
    #include <algorithm> //#
    using namespace std; //#
    template<typename Cont>  // oder wahlweise auch auf Elementtyp T
    void sortDataCont(Cont &data) {
        // ...exemplarisch...
        sort(data.begin(), data.end());
    }
    template<typename It>
    void sortDataIt(It b, It e) {
        // ...exemplarisch...
        sort(b, e);
    }
    int main() { //#
       vector<int> data;  //#
       sortDataCont(data); //#
       sortDataIt(data.begin(), data.end()); //#
    } //#

