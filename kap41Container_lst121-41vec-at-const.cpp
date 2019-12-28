    #include <vector>
    #include <iostream>
    void printAndMore(const std::vector<int>& data) { // by-const-ref
        std::cout << data[0] << std::endl;
        //= 1
        #if 0 //#
        data[0] = 666;  // geht nicht, weil 'const int&'
        #endif //#
    }
    int main() {
        std::vector<int> zahlen {1,2,3};
        printAndMore(zahlen);
    }

