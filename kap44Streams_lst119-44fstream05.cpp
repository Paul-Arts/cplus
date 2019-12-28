    #include <fstream>
    #include <iomanip> // setw
    #include <iostream>
    int main() {
        std::ifstream file("data.dat");
        if( !file ) {
            std::cout << "Fehler beim ?ffnen\n";
            return 1;
        }
        char ch;
        while(file.get(ch) ) {
            std::cout.put(ch);
        }
        //= ******1234
        if( file.eof() ) {
            file.clear();
        }
        file.close();
    }

