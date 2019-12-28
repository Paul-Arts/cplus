    #include <iostream>
    #include <thread>
    #include <chrono>
    #include <vector>
    #include <memory>
    using namespace std::chrono; // seconds, suffix s
    struct Image {
        std::vector<char> data_; // Kopie teuer
        explicit Image() : data_(1'000'000) {}
    };
    void zeigeImage(Image img) {
        std::cout << img.data_.size() << '\n';
    }
    void zeigeIptr(std::unique_ptr<int> iptr) {
        std::cout << *iptr << '\n';
    }
    int main() {
        // teuer zu kopieren, aber daf?r gut zu verschieben:
        Image image{};
        std::cout << image.data_.size() << std::endl;    // Ausgabe: 1000000
        //= 1000000
        std::thread th1{ zeigeImage, std::move(image) }; // Ausgabe: 1000000
        //= 1000000
        std::this_thread::sleep_for(1s);
        std::cout << image.data_.size() << std::endl;    // Ausgabe: 0
        //= 0
        th1.join();
        // unm?glich zu kopieren, aber gut zu verschieben:
        auto iptr = std::make_unique<int>( 657 );
        std::cout << (bool)iptr << std::endl;            // Ausgabe: 1 f?r wahr
        //= 1
        std::thread th2{ zeigeIptr, std::move(iptr) };   // Ausgabe: 657
        //= 657
        std::this_thread::sleep_for(1s);
        std::cout << (bool)iptr.get() << std::endl;      // Ausgabe: 0 f?r falsch
        //= 0
        th2.join();
    }

