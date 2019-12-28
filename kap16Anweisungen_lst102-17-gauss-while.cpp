    #include <iostream>
    int main() {
        /* Summiere 1 bis 100 auf */
        int summe = 0;
        int zahl = 1;
        while(zahl <= 100)       // Bedingung
        {                        // Block, der wiederholt ausgef?hrt wird
            summe += zahl;       // f?rs Ergebnis
            zahl += 1;           // n?chste Zahl
        }                        // Ende des wiederholten Blocks
        std::cout << summe << std::endl;
        //= 5050
    }

