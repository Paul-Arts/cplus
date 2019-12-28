    #include <vector>//#
    template<class T> //#
    class MxStack { //#
    public: //#
        bool isEmpty() const; //#
        void push(const T&); //#
        void pop(); //#
        const T& top() const; //#
    }; //#
    int main() { //#
    MxStack<int> mxs{};
    // ...
    // mehr Code
    // ...
    if( ! mxs.isEmpty()) {
        const auto value = mxs.top();
        mxs.pop();
        // ...
        // mehr Code
        // ...
    }
    }//#

