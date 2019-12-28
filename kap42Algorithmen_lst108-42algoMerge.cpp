    #include <algorithm>
    #include <iostream>
    #include <list>
    #include <string>
    #include <iterator> // ostream_iterator
    #include <cctype>   // toupper
    using std::toupper;

    int main() {
        std::list<int> a{ 1,2,4,4,4,7,7,9 };
        std::list<int> b{ 2,2,3,4,4,8 };
        using Os = std::ostream_iterator<int>; // Typ des Ausgabeiterators
        Os os{std::cout, " "};                 // Streamausgabeiterator f?r int
        auto run = [&a,&b,&os](auto algo) {    // nutze a, b und os
            algo(a.begin(), a.end(), b.begin(), b.end(), os); // Algorithmus aufrufen
            std::cout << '\n';
        };

        // Ergebnisse der Algorithmen
        using It = decltype(a.begin());        // Typ der Eingabeiteratoren

        run(std::merge<It,It,Os>);            // Ausgabe: 1 2 2 2 3 4 4 4 4 4 7 7 8 9
        //= 1 2 2 2 3 4 4 4 4 4 7 7 8 9
        run(std::set_union<It,It,Os>);        // Ausgabe: 1 2 2 3 4 4 4 7 7 8 9
        //= 1 2 2 3 4 4 4 7 7 8 9
        run(std::set_intersection<It,It,Os>); // Ausgabe: 2 4 4
        //= 2 4 4
        run(std::set_difference<It,It,Os>);   // Ausgabe: 1 4 7 7 9
        //= 1 4 7 7 9
        run(std::set_symmetric_difference<It,It,Os>); // Ausgabe: 1 2 3 4 7 7 8 9
        //= 1 2 3 4 7 7 8 9

        // Mit Buchstaben wird noch klarer
        std::string x = "abdddggi";
        std::string y = "BBCDDH";
        using Us = std::ostream_iterator<char>;   // Typ des Ausgabeiterators
        Us us{std::cout, ""};                     // Streamausgabeiterator f?r char
        auto compare = [](auto c, auto d) { return toupper(c) < toupper(d); };
        auto run2 = [&x,&y,&us,&compare](auto algo) {    // nutze x, y und us
            algo(x.begin(), x.end(), y.begin(), y.end(), us, compare);
            std::cout << '\n';
        };
        // Ergebnisse der Algorithmen
        using Jt = decltype(x.begin());           // Typ der Eingabeiteratoren
        using Cm = decltype(compare);             // Typ der Vergleichsfunktion

        run2(std::merge<Jt,Jt,Us,Cm>);            // Ausgabe: abBBCdddDDggHi
        //= abBBCdddDDggHi
        run2(std::set_union<Jt,Jt,Us,Cm>);        // Ausgabe: abBCdddggHi
        //= abBCdddggHi
        run2(std::set_intersection<Jt,Jt,Us,Cm>); // Ausgabe: bdd
        //= bdd
        run2(std::set_difference<Jt,Jt,Us,Cm>);   // Ausgabe: adggi
        //= adggi
        run2(std::set_symmetric_difference<Jt,Jt,Us,Cm>); // Ausgabe: aBCdggHi
        //= aBCdggHi
    }

