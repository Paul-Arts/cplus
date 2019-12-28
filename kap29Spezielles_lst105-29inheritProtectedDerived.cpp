    #include <29DerivedProtected.hpp> //# from defining=
    #include <iostream>
    using std::cout; using std::ostream;
    // ... wie zuvor ...
    struct Normalfall : public DerivedPublic {
        void drucke() {
            cout << xPublic;
            cout << xProtected;
        }
    };
    struct Spezialfall : public DerivedPrivate {
        void drucke() {
        #if 0 //#
            cout << xPublic;                  // kein Zugriff
            cout << xProtected;               // kein Zugriff
        #endif //#
        }
    };
    int main() {
        Normalfall n {};
        n.drucke(); // Ausgabe: 12
        //= 12
        Spezialfall s {};
        s.drucke();
    }

