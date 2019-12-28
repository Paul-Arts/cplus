    #include <fstream>
    #include <iostream>
    #include <memory> // unique_ptr
    int main() {
        std::fstream file("44Streams.tex");          // Datei zum Lesen ?ffnen
        
        auto bufptr = file.rdbuf();                  // std::streambuf*
        auto size = bufptr->pubseekoff(0, file.end); // std::streamsize
        bufptr->pubseekoff(0, file.beg);             // wieder an den Anfang

        auto buffer = std::unique_ptr<char[]>(new char[size]); // Speicher holen
        auto n = bufptr->sgetn(buffer.get(), size);  // ?bertrage Anzahl Zeichen
        std::cout << "Zeichen gelesen: " << n << "\n";
        std::cout.write(buffer.get(), size);         // char[] ausgeben
    }

