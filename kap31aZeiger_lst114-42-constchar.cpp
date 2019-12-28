    #include <cstring> //#
    #include <iostream> //#
    int main() { //#
    const char vimes[13] = "Samuel Vimes"; // const char[13]
    const char colon[] = "Fred Colon";     // const char[11]
    const char *nobby = "Nobby Nobbs";     // const char[12]
    std::cout << strlen(vimes) << " " << strlen(colon) << " " << strlen(nobby) << "\n"; //#
    //= 12 10 11
    }//#

