    #include <memory> //#
    #include <mutex> // once_flag, call_once
    struct BigData {};  //#
    std::shared_ptr<BigData> bigData{};
    std::once_flag bigDataInitFlag;
    void initBigData() {
        bigData = std::make_shared<BigData>();
    }
    int useBigData() {
        std::call_once(bigDataInitFlag, initBigData);
        // bigData->...
    }
    int main() { useBigData(); } //#

