    #include <string>
    struct Base {
        void func(int x) {};
    };
    struct Derived : public Base {
        void func(std::string y) {};   // verschattet func(int)
    };
    int main() {
        Derived d{};
        d.func("Text");
    #if 0 //#
        d.func(3);  // Fehler: func(int) ist nicht mehr sichtbar
    #endif //#
    }

