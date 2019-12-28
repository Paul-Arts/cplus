    #include <iostream>                      // cout

    int min3(int x, int y, int z) {          // Funktion liefert einen int zur?ck
        if(x<y) {
            if(x<z) return x;
            else return z;
        } else if(y<z) {
            return y;
        }
        else return z;
    }

    void printMin(int x, int y, int z) {     // Funktion liefert nichts zur?ck
        if(x<0 || y<0 || z<0) {
            std::cout << "Bitte nur Zahlen groesser 0\n";
            return;
        }
        std::cout << min3(x,y,z) << "\n";
    }                                        // hier steht kein return

    int main() {
        printMin(3, -4, 8);
        //= Bitte nur Zahlen groesser 0
        printMin(6, 77, 4);
        //= 4
        printMin(5, 77, 6); //#
        //= 5
        printMin(77, 3,  6); //#
        //= 3
        printMin(77, 6,  2); //#
        //= 2
        return 0; //# next line acts like 'return 1'!?
    #if 0 //#
        return;                              // besonderes return in main
    #endif //#
    }

