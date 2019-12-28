    #include <iostream>
    #include <array>
    #include <string>
    using std::array;

    template<typename T, size_t S>
    auto append(const array<T, S>& data, T elem) {
        array<T, S+1> result {};
        for(auto i=0; i < data.size(); ++i)
            result[i] = data[i];
        result[S] =elem;
        return result;
    }

    int main() {
        // vorher
        array<int,3> pics { 3, 4, 5 };
        std::cout << pics[0] << '\n'; // Ausgabe: 3
        //= 3
        // vergr??ern
        auto mehr = append(pics, 77);
        // nachher
        std::cout << mehr[3] << '\n'; // Ausgabe: 77
        //= 77
    }

