    #include <vector>
    using std::vector;
    struct B {};
    struct D : public B {};
    struct Base1 {
        virtual B& func();
    };
    struct Derived1 : public Base1 {
        virtual D& func() override;         // D& ist kovariant
    };
    struct Base2 {
        virtual B& func();
    };
    struct Derived2 : public Base2 {
    #if 0 //#
        virtual D func() override;          // D ist nicht kovariant
    #endif //#
    };
    struct Base3 {
        virtual vector<B> func();
    };
    struct Derived3 : public Base3 {
    #if 0 //#
        virtual vector<D>& func() override; // vector<D>& ist nicht kovariant
    #endif //#
    };
    struct Base4 {
        virtual vector<B*>& func();
    };
    struct Derived4 : public Base4 {
    #if 0 //#
        virtual vector<D*>& func() override; // anderer Typ, nicht kovariant
    #endif //#
    };

