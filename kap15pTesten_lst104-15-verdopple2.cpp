    #include <cstdlib> //#
    void assertTrue(bool b) { if(!b) exit(-1); } //#
    int verdopple(int val) { return val*2; } //#
    void testVerdopple() {
        assertTrue( verdopple(0) == 0 );
        assertTrue( verdopple(-1) == -2 );
        assertTrue( verdopple(1) == 2 );
        assertTrue( verdopple(5) == 10 );
    }
    int main() { testVerdopple(); } //#

