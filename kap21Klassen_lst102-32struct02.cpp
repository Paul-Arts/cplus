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
    Person erzeuge(string name, int alter, string ort) { // R?ckgabetyp
        Person result {name, alter, ort};
        return result;
    }
    int main() {
        Person otto = erzeuge("Otto", 45, "Kassel");     // R?ckgabe speichern
        drucke(otto);
        //= Otto (45) aus Kassel
    }


