    #include <regex> //#
    #include <string> //#
    #include <iostream> //#
    using std::regex; using std::regex_search; using std::cmatch; using std::string; //#
    const string scoreKeyword = R"(^score\s+)";
    const string numberOfPoints = R"((\d+))";
    const string forKeyword = R"(\s+for\s+)";
    const string numberOfNights = R"((\d+))";
    const string nightsAtKeyword = R"(\s+nights?\s+at\s+)";
    const string hotelName = R"((.*))";
    const regex muster{ scoreKeyword + numberOfPoints +
        forKeyword + numberOfNights + nightsAtKeyword + hotelName };
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
    }

