    #include <vector>
    #include <iostream> // cout
    using std::vector;
    int main() {
        vector<int> data{ 5,4,3,2,1 };
        vector<int>::const_iterator ende = data.end(); // oder end(data)
        for(vector<int>::const_iterator it = data.begin(); it!=ende; ++it) {
            std::cout << *it << " ";
        }
        std::cout << "\n";
        //= 5 4 3 2 1
    }


