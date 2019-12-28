    #include <iostream>
    #include <vector>
    #include <list>
    #include <iterator> // iterator_traits

    namespace {         // Implementierungsdetails
      template<class Iter> void alg(Iter, Iter, std::bidirectional_iterator_tag) {
        std::cout << "bidirektional, aber nicht wahlfrei\n";
      }

      template <class Iter>
      void alg(Iter, Iter, std::random_access_iterator_tag) {
        std::cout << "wahlfrei.\n";
      }
    }
    template<class Iter>
    void alg(Iter first, Iter last) {  // allgemeine Implementierung
        auto tag = typename std::iterator_traits<Iter>::iterator_category();
        alg(first, last, tag); // w?hlt passende ?berladung
    }
    int main() {
        std::vector<int> v {};         // vector ist wahlfrei
        alg(v.begin(), v.end());
        //= wahlfrei.
        std::list<int> l;              // list ist nur bidirektional
        alg(l.begin(), l.end());
        //= bidirektional, aber nicht wahlfrei
    #if 0 //#
        std::istreambuf_iterator<char> i1{std::cin}, i2{}; // nicht einmal bidirektional
        alg(i1, i2); // Fehler: Keine passende ?berladung gefunden.
    #endif //#
    }

