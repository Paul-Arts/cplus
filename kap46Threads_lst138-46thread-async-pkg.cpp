    #include <future>
    #include <thread>
    #include <iostream>
    int ack(int m, int n); // Ackermannfunktion
    int ack(int m, int n) { //#
        if(m==0) return n+1; //#
        if(n==0) return ack(m-1, 1); //#
        return ack(m - 1, ack(m, n-1)); //#
    } //#
    int main () {
        std::packaged_task<int(void)> task1 {          // Signatur der Restfunktion
        []{ return ack(3,11);}  };                     // ack(3,11) vorbereiten
      auto f1 = task1.get_future();                    // Kommunikationskanal
      std::thread th1 { move(task1) };                 // In neuen Thread
      std::cout << "  ack(3,11):" << f1.get()          // Ergebnis abholen
          << '\n';                                     // Ausgabe: ack(3,11):16381
      th1.join();
      //= ack(3,11):16381
    }

