    #include <string> //#
    #include <iostream> //#
    #include <new> // nothrow
    int SOME_ERROR; int main() { //#
    std::string *ps = new(std::nothrow) std::string{};
    if(ps == nullptr) {
       std::cerr << "Die Speicheranforderung ging schief\n";
       return SOME_ERROR;
    }
    return EXIT_SUCCESS; } //#


