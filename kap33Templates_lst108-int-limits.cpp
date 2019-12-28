    #include <iostream>                                  // cout
    #include <limits>                                    // numeric_limits

    template<typename INT_TYP>                           // Template mit Typ Argument
    void infos(const char* name) {
        using L = typename std::numeric_limits<INT_TYP>; // k?rzer umbenennen
        std::cout
            << name
            << " zahlenbits:" << L::digits               // Bits ohne Vorzeichenbit
            << " vorzeichen:" << L::is_signed            // speichert Vorzeichen?
            << " min:"<< (long long)L::min()             // kleinster m?glicher Wert
            << " max:"<< (long long)L::max()             // gr??ter m?glicher Wert
            << "\n";
    }

    int main() {
        infos<signed char>("char");                      // kleinster int-Typ
        //= char zahlenbits:7 vorzeichen:1 min:-128 max:127
        infos<short>("short");
        //= short zahlenbits:15 vorzeichen:1 min:-32768 max:32767
        infos<int>("int");
        //= int zahlenbits:31 vorzeichen:1 min:-2147483648 max:2147483647
        infos<long>("long");
        //= long zahlenbits:63 vorzeichen:1 min:-9223372036854775808 max:9223372036854775807
        infos<long long>("long long");                   // gr??ter int-Typ
        //= long long zahlenbits:63 vorzeichen:1 min:-9223372036854775808 max:9223372036854775807
    }

