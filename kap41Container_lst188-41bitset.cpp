    #include <bitset>
    #include <iostream>
    using std::cout;
    int main() {
        std::bitset<8> bits{};         // 8 Bit dicht gepackt
        bits.set(4);                   // 5. Bit auf 1
        cout << bits << '\n';          // 00010000
        //= 00010000
        bits.flip();                   // Alle Bits invertieren
        cout << bits << '\n';          // 11101111
        //= 11101111
        bits.set();                    // Alle Bits auf 1
        bits.flip(1);                  // 2. Bit invertieren
        std::cout << bits << '\n';     // 11111101
        //= 11111101
        bits.reset();                  // Alle Bits auf 0
        bits.set(4);                   // 5. Bit auf 1
        cout << bits << '\n';          // 00010000
        //= 00010000
        bits.flip();                   // Alle Bits invertieren
        cout << bits << '\n';          // 11101111
        //= 11101111
        bits.set();                    // Alle Bits auf 1
        bits.flip(1);                  // 2. Bit invertieren
        bits.flip(6);                  // 7. Bit invertieren
        cout << bits << '\n';          // 10111101
        //= 10111101
        // Verkn?pfungen
        std::bitset<8> zack("....####", 8, @'@.@'@, '#' );
        cout << zack << '\n';          // 00001111
        //= 00001111
        cout << (bits & zack) << '\n'; // 00001101
        //= 00001101
        cout << (bits | zack) << '\n'; // 10111111
        //= 10111111
        cout << (bits ^ zack) << '\n'; // 10110010
        //= 10110010
        // Andere Integertypen
        std::bitset<64> b(0x123456789abcdef0LL);
        cout << b << '\n';
        // 0001001000110100010101100111100010011010101111001101111011110000
        //= 0001001000110100010101100111100010011010101111001101111011110000
        cout << std::hex << b.to_ullong() << '\n'; // umwandeln
        // 123456789abcdef0
        //= 123456789abcdef0
    }


