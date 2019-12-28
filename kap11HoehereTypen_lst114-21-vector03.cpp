    #include <vector>
    #include <iostream>                        // cout, endl
    int main() {
        std::vector<int> qus{1,4,9,16,25};
        for(int idx=0; idx<qus.size(); ++idx)  // size enth?lt die Anzahl
            std::cout << qus[idx] << " ";      // [idx] oder at(idx) holt ein Element
        std::cout << std::endl;
        //= 1 4 9 16 25
    }


