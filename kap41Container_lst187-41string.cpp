    #include <vector>
    #include <string>
    #include <iostream>
    using std::string; using std::vector; using std::cout;

    int main() {
        string s1 = "Hallo";                  // einfach mit Stringliteral
        string s2{@'@H@'@,@'@a@'@,@'@l@'@,@'@l@'@,@'@o@'@};       // oder mit liste von char

        using namespace std::literals;        // f?r ""s-Suffix
        auto s3 = "Hallo"s;  // noch einfacher mit echtem Stringliteral

        #if 0 //#
        vector<char> v1{"Hallo"};             // Kein vector mit Stringliteral
        #endif //#
        vector<char> v2{@'@H@'@,@'@a@'@,@'@l@'@,@'@l@'@,@'@o@'@}; // Liste von char ist okay
        cout << s1 << s2 << s3 << '\n';       // Ausgabe von string geht
        //= HalloHalloHallo
        #if 0 //#
        cout << v1 << v2 << '\n';             // vector hat keine Ausgabe
        #endif //#
    }


