    #include <vector> //#
    #include <thread> //#
    #include <mutex> //#
    template<typename T> //#
    class MxStack { //#
        std::vector<T> data_; //#
        std::mutex mx_; //#
    public: //#
        MxStack() : data_{} {} //#
        bool isEmpty() const { return data_.empty(); } //#
        void push(const T& val) { //#
            std::lock_guard<std::mutex> g{mx_}; //#
            data_.push_back(val); //#
        } //#
        T pop() { //#
            std::lock_guard<std::mutex> g{mx_}; //#
            if(data_.empty()) throw std::length_error{"empty stack"}; //#
            T tmp{std::move(data_.back())}; //#
            data_.pop_back(); //#
            return tmp; //#
        } //#
    friend void swap(MxStack& re, MxStack& li) {
        if(&re==&li) return;           // Adresse dieselbe? Mit sich selbst tauschen unn?tig
        std::lock( re.mx_, li.mx_ );   // Mehrere Sperren gleichzeitig
        std::lock_guard<std::mutex> lkre{re.mx_, std::adopt_lock}; // schon gesperrt
        std::lock_guard<std::mutex> lkli{li.mx_, std::adopt_lock}; // schon gesperrt
        std::swap(li.data_, re.data_); // Vertauschen ausf?hren
    }
    }; //#
    int main() { //#
        MxStack<int> mxs{}; //#
        MxStack<int> mys{}; //#
        swap(mxs, mys); //#
    } //#

