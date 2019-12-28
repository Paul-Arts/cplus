    #include <string>
    #include <iostream> //#
    using std::string;
    class Widget {
        string name_ = "";
    public:
        void setName(string newName) {
            name_ = newName;
        }
        const string& getName() const {    // const&-R?ckgabe
            return name_;
        }
    };
    int main() {
        Widget w{};
        w.setName("Titel");
        string name1 = w.getName();        // neuer String, also Kopie
        name1.clear();                     // Die Kopie d?rfen Sie wieder ver?ndern
        const string& name2 = w.getName(); // const-Referenz auf inneren string name_
        /* name2.clear(); */               // name2 ist const, geht also nicht
    #if 0 //#
        string& name3 = w.getName(); // geht nicht, Funktion gibt const& zur?ck, nicht &.
    #endif //#
        auto name4 = w.getName();          // identisch zu name1
        w.setName("xxx"); //#
        std::cout << name4 << "\n"; //= Titel
        const auto& name5 = w.getName();   // identisch zu name2
        std::cout << name5 << "\n"; //= xxx
        (void)name2; (void)name5; //#
    }

