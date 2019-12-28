    #include <iostream>
    #include <iomanip>  // setprecision

    void prints(short s, int i, float f, double d) {
        std::cout << "short: " << s << " "
            << "int: " << i << " "
            << std::setprecision(20) // drucke 20 Stellen, wenn n?tig
            << "float: " <<  f << " "
            << "double: " << d << "\n";
    }

    int main() {
        int mill = 1000*1000;                // 1 Million
        prints(mill, mill, mill, mill);      // short l?uft ?ber
        // Ausgabe: short: 16960 int: 1000000 float: 1000000 double: 1000000
        //= short: 16960 int: 1000000 float: 1000000 double: 1000000
        long bill = 1000L*1000L*1000L*1000L; // 1 Billion
        prints(bill, bill, bill, bill);      // sogar int l?uft ?ber, float wird ungenau
        // Ausgabe: short: 4096 int: @MINUS@727379968 float: 999999995904 double: 1000000000000
        //= short: 4096 int: @MINUS@727379968 float: 999999995904 double: 1000000000000
        float drei = 3.75f;
        prints(drei, drei, drei, drei);      // Nachkommastellen gehen verloren
        // Ausgabe: short: 3 int: 3 float: 3.75 double: 3.75
        //= short: 3 int: 3 float: 3.75 double: 3.75
    }

