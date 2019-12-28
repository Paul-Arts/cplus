    #include <iostream>

    struct Zahl {
        int wert_;
    };

    template<typename TYP>
    void print(TYP value) {
        std::cout << value << "\n";
    }
    int main() {
        print(5);
        //= 5
        print(-10.25);
        //= -10.25
        print("Flamingo");
        //= Flamingo
        Zahl sieben { 7 };
    #if 0 //#
        print(sieben);
    #endif //#
        (void)sieben;//#
    }

