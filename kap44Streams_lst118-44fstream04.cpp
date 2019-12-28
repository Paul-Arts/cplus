    #include <fstream>
    #include <iomanip> // setw
    #include <iostream>
    int main() {
        std::ofstream file("data.dat");
        if( !file ) {
            std::cout << "Konnte data.dat nicht ?ffnen\n";
            return 1;
        }

        std::cout << "Bitte eine Ganzzahl eingeben: ";
        file << std::setw(10) << std::setfill( '*' )
             << 1234 << std::endl;
        //= Bitte eine Ganzzahl eingeben:
    }

