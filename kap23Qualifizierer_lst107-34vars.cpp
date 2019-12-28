    #include <vector>
    namespace {                   // anonymer Namensraum f?r Konstanten
        const unsigned DATA_SIZE = 100; /* Anzahl Elemente in Data */
        const double LIMIT = 999.999; /* Maxwert bei Initialisierung */
    };
    std::vector<int> createData() {
        std::vector<int> result(DATA_SIZE);
        double currVal = 1.0;
        for(auto &elem : result) {
            elem = currVal;
            currVal *= 2;         // n?chster Wert ist gr??er
            if(currVal > LIMIT) {
                currVal = LIMIT;  // kein Wert darf gr??er sein
            }
        }
        return result;
    }

