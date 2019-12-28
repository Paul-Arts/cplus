    #include <string> //#
    #include <tuple> //#
    #include <vector> //#
    template <typename T, typename U=T> // allgemeiner Fall //#
    class MyPair { //#
        T data01_; //#
        U data02_; //#
    public: //#
        MyPair(const T& t, const U& u) : data01_{t}, data02_{u} {} //#
    }; //#
    template <typename T>   // teilweise Spezialisierung, T bleibt formal //#
    class MyPair<T, std::string> {  // U ist auf string spezialisiert //#
        std::tuple<T,std::string> data_; //#
    public: //#
        MyPair(const T& t, const std::string& str) : data_{t, str} { } //#
    }; //#
    template <typename U>   // teilweise Spezialisierung, U bleibt formal //#
    class MyPair<std::string, U> {  // T ist auf string spezialisiert //#
        std::tuple<std::string, U> data_; //#
    public: //#
        MyPair(const std::string& str, const U& u) : data_{str, u} { } //#
    }; //#
    template<>   // vollst?ndige Spezialisierung
    class MyPair<std::string, std::string> {
        std::vector<std::string> data_;
    public:
        MyPair(const std::string& t, const std::string& u) : data_{t, u} { }
    };
    int main() {
        // nutzt die vollst?ndige Spezialisierung:
        MyPair<std::string,std::string> strStr{"c","d"};
    }

