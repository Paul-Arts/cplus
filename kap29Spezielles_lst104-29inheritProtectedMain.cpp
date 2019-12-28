    #include <29DerivedProtected.hpp> //# from defining=
    #include <iostream>
    using std::cout; using std::ostream;
    // ... wie zuvor ...
    int main() {
        // ?ffentlich erben
        DerivedPublic dpu{};
        cout << dpu.xPublic << '\n';        // Ausgabe: 1
        //= 1
        #if 0 //#
        cout << dpu.xProtected << '\n'; // kein Zugriff von au?en
        #endif //#
        // gesch?tzt erben
        DerivedProtected dpt{};
        #if 0 //#
        cout << dpt.xPublic << '\n';    // kein Zugriff von au?en
        cout << dpt.xProtected << '\n'; // kein Zugriff von au?en
        #endif //#
        // private erben
        DerivedPrivate dpv{};
        #if 0 //#
        cout << dpv.xPublic << '\n';    // kein Zugriff von au?en
        cout << dpv.xProtected << '\n'; // kein Zugriff von au?en
        #endif //#
    }

