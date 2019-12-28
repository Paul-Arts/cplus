    #include <iostream>
    #include <ios>        // left, right, internal
    #include <iomanip>    // setw
    using std::cout; using std::endl;

    int main() {
        int val = -1000;
        cout << std::setw(10) << std::internal
             << val << endl;
        //= -     1000
        cout << std::setw(10) << std::left << val << endl;
        //= -1000
        cout << std::setw(10) << std::right
             << val << endl;
        //= -1000
    }


