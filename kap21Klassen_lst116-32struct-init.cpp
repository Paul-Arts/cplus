    #include <string>

    using std::string;

    struct Person {
        string name_;
        int alter_;
        string ort_;
        Person(string n, int a, string o)
                {           // Init-Liste fehlt
            init(n, a, o);  // fragw?rdiger "Initialisierungsaufruf"
        }
        void init(string n, int a, string o) {
          name_ = n; alter_ = a; ort_ = o;
        }
    };


