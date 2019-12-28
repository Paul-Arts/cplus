    #include <iostream>
    #include <string>
    #include <chrono>
    #include <complex>
    using std::cout;

    int main() {
        { using namespace std;
          cout << "string"s << "\n";           // string
          cout << (1.2+3.4i) << "\n";          // complex
          //= string
          //= (1.2,3.4)
          //# fehler in gcc: "1" f?r complex
          }
        { using namespace std::chrono;
          cout << (35ms).count() << "ms\n";    // chrono
          //= 35ms
          }
        { using namespace std::literals;
          cout << (41s).count() << "ms\n";     // chrono seconds
          cout << "text"s << "\n";             // string
          //= 41ms
          //= text
        }
        { using namespace std::chrono; 
          cout << (4h).count() << "h\n";       // chrono hours
          //= 4h
        }
        { using namespace std::literals::chrono_literals; 
          cout << (16min).count() << "min\n";  // chrono minutes
          //= 16min
        }
        { using std::literals::string_literals::operator""s; 
          cout << "buchstaben"s <<"\n";        // string
          //= buchstaben
        }
    }

