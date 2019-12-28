    int zwei() { return 2; }
    #if 0 //#
    double zwei() { return 2.0; }
    #endif //#
    int main() {
        int x = zwei();
        double y = zwei();
    }

