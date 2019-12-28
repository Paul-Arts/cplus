    #include <thread>
    #include <mutex>
    #include <condition_variable>
    #include <vector>
    #include <deque>
    #include <iostream>
    #include <sstream>   // stringstream
    std::deque<int> g_data{};          // Datenaustausch zwischen Threads
    std::condition_variable g_condvar; // benachrichtigen
    std::mutex g_mx;                   // sch?tzt g_data w?hrend Ver?nderungen
    void produziere(int limit) {
      std::vector<int> prims{2};     // bisherige Prims als Pr?f-Teiler
      for(int kandidat=3; kandidat < limit; kandidat+=2) {
        for(int teiler : prims) {
          if(teiler*teiler > kandidat) {          // kandidat ist prim
            std::lock_guard<std::mutex> lk{g_mx}; // data sch?tzen
            g_data.push_back(kandidat);           // f?llen
            g_condvar.notify_one();               // benachrichtigen
            prims.push_back(kandidat);            // f?r interne Berechnungen
            break; // n?chster Prim-Kandidat
          } else if(kandidat % teiler == 0) {     // nicht prim
            break;                                // n?chster Prim-Kandidat
          } else {
            // n?chster Pr?f-Teiler
          }
        }
      }
      // ganze Arbeit fertig mitteilen
      std::lock_guard<std::mutex> lk{g_mx}; // data sch?tzen
      g_data.push_back(0);                  // mit Endemarkierung f?llen
      g_condvar.notify_all();               // benachrichtigen
    }
    std::mutex g_coutMx;
    void konsumiere(char l, char r) {
      while(true) {                         // f?r immer
        std::unique_lock<std::mutex> lk{g_mx};
        g_condvar.wait(lk, []{ return !g_data.empty();});
        int prim = g_data.front();          // Daten holen
        if(prim == 0) return;               // fertig; 0 drin lassen f?r andere Konsumenten
        g_data.pop_front();
        lk.unlock();                        // Sperre freigeben
        std::stringstream ss;               // Daten verarbeiten
        ss << l << prim << r <<' ';
        std::lock_guard<std::mutex> lk2{g_coutMx};
        std::cout << ss.str();
      }
    }
    int main() {
      // ein Produzent:
      std::thread thProd{produziere, 1'000};
      // drei Konsumenten
      std::thread thKon1{konsumiere, '[', ']' };
      std::thread thKon2{konsumiere, '<', '>' };
      std::thread thKon3{konsumiere, '{', '}' };
      // warten und beenden
      thProd.join();
      thKon1.join(); thKon2.join(); thKon3.join();
      std::cout << '\n';
    }

