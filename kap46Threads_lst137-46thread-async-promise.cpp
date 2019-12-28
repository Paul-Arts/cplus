    #include <future>
    #include <thread>
    #include <iostream>
    #include <exception>
    int ack(int m, int n); // Ackermannfunktion
    int ack(int m, int n) { //#
        if(m==0) return n+1; //#
        if(n==0) return ack(m-1, 1); //#
        return ack(m - 1, ack(m, n-1)); //#
    } //#
    void langeBerechnung(std::promise<int> intPromise) {
      try {
        int result = ack(3,12);
        intPromise.set_value(result);                    // Ergebnis mitteilen
      } catch (std::exception &e) {
        intPromise.set_exception(make_exception_ptr(e)); // Exception mitteilen
      } catch ( ... ) {
        intPromise.set_exception(std::current_exception());   // Exc. ohne Namen
      }
    }
    int main () {
      std::promise<int> intPromise;                           // Promise erzeugen
      std::future<int> intFuture = intPromise.get_future();   // Future anfordern
      std::thread th{ langeBerechnung,                        // starten
                 std::move(intPromise) };                     // Promise ?bergeben
      th.detach();                                       // weiterlaufen lassen
      // k?nnte eine Exception werfen:
      int result = intFuture.get();                      // Ergebnis anfordern
      std::cout << result << std::endl;
      //= 32765
    }

