    #include <regex> //#
    #include <string> //#
    #include <iostream> //#
    using std::regex; using std::regex_search; using std::cmatch; using std::string; //#
    const regex muster{R"(^score)"
        R"(\s+)"
        R"((\d+))"          // Punkte
        R"(\s+)"
        R"(for)"
        R"(\s+)"
        R"((\d+))"          // Anzahl N?chte
        R"(\s+)"
        R"(night)"
        R"(s?)"             // optional: Plural
        R"(\s+)"
        R"(at)"
        R"(\s+)"
        R"((.*))"           // Hotelname
        R"()"};
    void extract(const string &text) { //#
        cmatch res; //#
        regex_search(text.c_str(), res, muster); //#
        std::cout << res[1] << "," << res[2] << "," << res[3] << "\n"; //#
    } //#
    int main() { //#
        extract("score 400 for 2 nights at Minas Tirith Airport"); //#
        //= 400,2,Minas Tirith Airport
        extract("score 84 for 1 night at Prancing Pony"); //#
        //= 84,1,Prancing Pony
    } //#

