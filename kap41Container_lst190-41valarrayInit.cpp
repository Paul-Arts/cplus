    #include <iostream> //#
    #include <valarray> //#
    using std::valarray; using std::cout; //#
    int main() { //#
    valarray<int> data;              // zun?chst Gr??e 0
    cout << data.size() << "\n";     // Ausgabe: 0
    //= 0
    data.resize(100);                // vergr??ert
    cout << data.size() << "\n";     // Ausgabe: 100
    //= 100
    valarray<int> data2(200);        // Platz f?r 200 Werte
    cout << data2.size() << "\n";    // Ausgabe: 200
    //= 200
    valarray<int> dataC(5, 20);      // Zwanzig 5en -- andersherum als bei vector
    cout << dataC.size() <<": dataC[6]="<< dataC[6]<< "\n"; // Ausgabe: 20: dataC[6]=5
    //= 20: dataC[6]=5
    valarray<int> dataD{ 2, 3, 5, 7, 11 }; // Initialisierungsliste
    cout << dataD.size() <<": dataD[3]=" <<dataD[3]<< "\n"; // Ausgabe: 5: dataD[3]=7
    //= 5: dataD[3]=7
    } //#

