    #include <iostream> //#
    template <typename T>
    class MyContainer {
        T data_;
    public:
        void setData(const T& d) { data_ = d; }
        T getData() const { return data_; }
    };
    int main() { //#
        MyContainer<int> mc; //#
        mc.setData(5); //#
        std::cout << mc.getData() << '\n'; //#
        //= 5
    }//#

