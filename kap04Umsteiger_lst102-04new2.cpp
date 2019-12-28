    #include <iostream> //#
    using std::cout; //#
    struct Data { Data(int v) : value{v} {} int value; }; //#
    int main() { //#
    Data* dataOwner = new Data(5);
    Data* data = dataOwner;
    Data* mehr = new Data(6);
    data = mehr;
    mehr->value = 7;
    cout << data->value << '\n'; // jetzt auch 7
    //= 7
    /* selbst wegr?umen */
    delete mehr;
    delete dataOwner;
    } //#

