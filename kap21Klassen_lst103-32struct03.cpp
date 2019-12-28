    // Ausschnitt
    #include <string> //#
    #include <iostream> //#
    using std::string; using std::cout; //#
      struct Person { //#
        string name_;  //#
        int alter_; //#
        string ort_; //#
    };  // abschlie?endes Semikolon //#
    void drucke(Person p) {            //#
        cout << p.name_ << " ("<< p.alter_<<") aus " //#
            << p.ort_ << "\n";//#
    } //#
    Person erzeuge(string name, int alter, string ort) {
        return Person{name, alter, ort};       // direkt zur?ckgegeben
    }
    int main() {
        drucke(erzeuge("Otto", 45, "Kassel")); // R?ckgabe direkt verwendet
        //= Otto (45) aus Kassel
    }


