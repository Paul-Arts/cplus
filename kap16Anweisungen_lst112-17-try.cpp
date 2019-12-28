    #include <iostream>
    int main() {
        try {                                        // Beginn des try-Blocks
            for(int n=1; ; n=n*2) {
                if(n < 0) {
                    throw "Es gab einen Ueberlauf";  // Fehler ausl?sen
                }
            }
        }                                            // Ende des try-Blocks
        catch(const char *fehler) {                  // Falls dieser Fehler auftritt, ...
          std::cout << "Fehler: " << fehler << "\n"; // ... behandle ihn so
          //= Fehler: Es gab einen Ueberlauf
        }
    }

