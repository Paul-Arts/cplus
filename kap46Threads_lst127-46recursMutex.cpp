    #include <mutex> // recursive_mutex
    #include <iostream>
    struct MulDiv {
        std::recursive_mutex mx_;
        int value_;
        explicit MulDiv(int value) : value_{value} {}
        void mul(int x) {
            std::lock_guard<std::recursive_mutex> lk1(mx_); // innen
            value_ *= x;
        }
        void div(int x) {
            std::lock_guard<std::recursive_mutex> lk2(mx_);  // innen
            value_ /= x;
        }
        void muldiv(int x, int y){
            std::lock_guard<std::recursive_mutex> lk3(mx_);  // au?en
            mul(x);
            div(y);
        }
    };
    int main() {
       MulDiv m{42}; // 3*7*2 *5
       m.muldiv(5, 15);
       std::cout << m.value_ << '\n'; // Ausgabe: 14
       //= 14
    }

