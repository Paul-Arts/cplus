    namespace lits {

      // Template-Hilfsfunktion f?r _ein_ Argument
      template<char C> int bin() {  // allgemeiner Fall
        if constexpr (C=='0') return 0;
        else if constexpr (C=='1') return 1;
      }
      // Template-Hilfsfunktion ab _zwei_ Argumente
      // ...
      template<char C, char D, char... ES> //#
      int bin() { //#
        return bin<C>() << (sizeof...(ES)+1) | bin<D,ES...>() ; //#
      } //#
      // eigentlicher operator"" //#
      template<char...CS> int operator"" _bin() //#
        { return bin<CS...>(); }; //#

    }
    int main() { //#
      using namespace lits; //#
      int eins = 1_bin; //#
      int acht = 1000_bin; //#
      int neun = 1001_bin; //#
      int zehn = 1010_bin; //#
      int elf  = 1011_bin; //#
      int hundertachtundzwanzig = 10000000_bin; //#
      (void)eins; (void)acht; (void)neun; (void)zehn; (void)elf; (void)hundertachtundzwanzig; //#
    } //#

