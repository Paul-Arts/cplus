    #include <chrono> //#
    using namespace std::chrono; //#
    using week = std::chrono::duration<int,
            std::ratio_multiply<std::ratio<7>,
                std::ratio_multiply<std::ratio<24>,hours::period>
            >
        >;
     week xxx; //#

