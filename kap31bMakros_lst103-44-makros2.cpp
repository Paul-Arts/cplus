    #include <vector> //#
    // ...hier Inhalt von <vector>...
    #include <iostream> //#
    //... hier Inhalt von <iostream>...
    using container_type = std::vector<int>;
    static constexpr unsigned SIZE = 10;

    int main() {
      { (std::cout) << "Programmstart" << "\n"; }
      //= Programmstart
      container_type data(SIZE);
      { (std::cout) << "Der Container hat " << data.size() << " Elemente." << "\n";}
      //= Der Container hat 10 Elemente.
      { (std::cout) << "Programmende" << "\n"; }
      //= Programmende
      { std::cout << "Das ging ja noch mal gut.\n"; }
      //= Das ging ja noch mal gut.
    }

