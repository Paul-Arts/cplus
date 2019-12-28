    struct Widget { //#
        int num_ = 0; //#
        void setNumber(int x) {        // eine nicht-const Methode //#
            num_=x; //#
        } //#
    }; //#
    const Widget createWidget() {  // R?ckgabe als const-Wert
        Widget result{};
        return result;
    }
    int main() {
        Widget w = createWidget(); // kopiert in neues nicht-const w
        w.setNumber(100);          // w ist nicht-const, ver?ndern ist okay
    }

