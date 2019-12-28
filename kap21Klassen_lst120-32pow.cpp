    class Rect {
        int area_;             // private Daten
    public:
        int x_, y_;
        void set(int x, int y) { x_=x; y_=y; area_=x_*y_; }
        int calc() { return area_; }
        Rect() = default;      // den Compiler einen Konstruktor generieren lassen
    };
    class Pow {
        int result_;           // private Daten. h?lt 'base' hoch 'exp'.
    public:
        int base_, exp_;
    %:if 0 //#
        void set(int b, int e) { /* ... */ }
    %:else //#
        void set(int, int) <% %> //#
    %:endif //#
        int calc() { return result_; }
        Pow() : result_{1} {}  // base_, exp_ wurden 0, dann muss result_=1 werden.
    };


