    #include <string>
    #include <iostream>                      // cout
    using std::string; using std::cout;
    struct Person {                          // definiert den neuen Typ Person
        string name_;
        int alter_;
        string ort_;
    };                                       // abschlie?endes Semikolon
    void drucke(Person p) {                  // ganze Person als ein Parameter
        cout << p.name_ << " ("<< p.alter_<<") aus " // Zugriff per Punkt
            << p.ort_ << "\n";
    }
    int main() {
        Person otto {"Otto", 45, "Kassel" }; // Initialisierung
        drucke(otto);                        // Aufruf als Einheit
        //= Otto (45) aus Kassel
    }

