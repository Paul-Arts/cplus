    #include <string>
    #include <vector>
    #include <fstream>   // ifstream
    #include <stdexcept> // runtime_error
    #include <iostream>  // cerr
    // C-Header:
    #include <zlib.h>    // gzXyz; sudo aptitude install libz-dev
    #include <cerrno>    // errno
    #include <cstring>   // strerror
    #pragma GCC diagnostic ignored "-Wmissing-field-initializers" //#
    namespace {
    using std::string; using std::vector;

