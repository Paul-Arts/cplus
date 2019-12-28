    #include <string>
    #include <iostream>
    using std::string; using std::cout;
    class Widget {
        string name_{};
    public:
        const string& readName() const;        // const&-R?ckgabe, const-Methode
        string& getName();                     // &-R?ckgabe
    };
    const string& Widget::readName() const { return name_; }
    string& Widget::getName() { return name_; }
    int main() {
        Widget w{};
        const string& readonly = w.readName(); // const&, unver?nderbar
        cout << "Name: " << readonly << "\n";  // noch "" leer.
        //= Name:
        string& readwrite = w.getName();       // &, ver?nderbar
        readwrite.append("dran");       // ver?ndert auch name_ und readonly
        cout << "Name per readwrite: " << readwrite << "\n"; // "dran"
        //= Name per readwrite: dran
        cout << "Name per readonly: " << readonly << "\n";   // auch "dran"
        //= Name per readonly: dran
    }

