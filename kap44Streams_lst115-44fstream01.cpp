    #include <fstream>
    #include <iostream>
    #include <string>
    int main() {
        std::string name = "textfile.txt";
        std::ifstream file01;
        file01.open(name);
        if( file01.fail() ) {
            std::cout << "Konnte " << name << " nicht oeffnen\n";
            //= Konnte textfile.txt nicht oeffnen
        }
        std::ofstream file02("data.dat");
        if( file02.good() ) {
            std::cout << "data.dat geoeffnet bzw. erzeugt\n";
            //= data.dat geoeffnet bzw. erzeugt
        }
        std::fstream file03;
        file03.open("database.db");
        if( !file03 ) {
            std::cout << "Konnte database.db nicht oeffnen\n";
            //= Konnte database.db nicht oeffnen
        }
    }

