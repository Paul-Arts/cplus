    #include <iostream> //#
    void berechne(int n) {                             // eine eigene Funktion
        using namespace std;                           // f?r std::cout und std::endl
        /* Teiler ausgeben */
        cout << "Teiler von " << n << " sind:\n";
        for(int teiler=1; teiler <= n; ++teiler) {     // statt teiler=teiler+1
            if(n % teiler == 0)
                cout << teiler << ", ";
        }
        cout << endl;
    }

