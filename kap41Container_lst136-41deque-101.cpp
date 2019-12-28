    #include <deque>
    #include <iostream>
    #include <string>
    #include <iomanip> // boolalpha
    using namespace std;
    bool isPalindrome(string word) {
        // von beiden Enden gleichzeitig pr?fen
        deque<char> deq{};
        for(char ch : word) {
            deq.push_back(::toupper(ch)); // Gro?buchstaben
        }
        auto ok = true;
        while(deq.size()>1 && ok) {
           if(deq.front() != deq.back()) {
               ok = false;
           }
           deq.pop_front();        // Hallo deque!
           deq.pop_back();
        }
        return ok;
    }
    int main() {
        cout << boolalpha; // Drucke 'true' und 'false' statt '1' und '0'
        cout << isPalindrome("Abrakadabra") << '\n';   // false
        //= false
        cout << isPalindrome("Kajak") << '\n';         // true
        //= true
        cout << isPalindrome("Lagerregal") << '\n';    // true
        //= true
        cout << isPalindrome("Reliefpfeiler") << '\n'; // true
        //= true
        cout << isPalindrome("Rentner") << '\n';       // true
        //= true
        cout << isPalindrome("") << '\n';              // true
        //= true
    }

