    struct Widget {
        int num_ = 0;
        void setNumber(int x) {    // eine Nicht-const-Methode
            num_=x;
        }
    };
    Widget createWidget() {        // R?ckgabe als Wert
        Widget result{};           // Erzeugen
        return result;
    }
    int main() {
        Widget w = createWidget(); // R?ckgabe als Wert erzeugt Kopie
        w.setNumber(100);          // ver?ndern, nat?rlich okay, w ist nicht-const
    }

