    #include <cstdlib> //#
    void assertTrue(bool b) { if(!b) exit(-1); } //#
    int verdopple(int val) { return val*2; } //#
    void testVerdopple5() {
        // vorbereiten
        auto param = 5;
        // ausf?hren
        auto result = verdopple(param);
        // ?berpr?fen
        assertTrue(result == 10);
    }
    int main() { testVerdopple5(); } //#

