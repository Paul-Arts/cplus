    #include <string>
    #include <vector>
    #include <iostream>       // cout

    void rechner(std::ostream& out, std::string input) {
        std::vector<int> stapel {};
        for(char c : input) {
            if(c>='0' && c<='9') {
                stapel.push_back( c-'0' ); // Zahlenwert des Zeichens
                continue;     // n?chste Schleifeniteration
            }
            int top = 0;
            int second = 0;
            switch(c) {       // Bedingung auf zeichen
            case @'@+@'@:
                top = stapel.back(); stapel.pop_back();
                second = stapel.back(); stapel.pop_back();
                stapel.push_back(second + top);
                break;
            case @'@-@'@:
                top = stapel.back(); stapel.pop_back();
                second = stapel.back(); stapel.pop_back();
                stapel.push_back(second - top);
                break;
            case @'@*@'@:
                top = stapel.back(); stapel.pop_back();
                second = stapel.back(); stapel.pop_back();
                stapel.push_back(second * top);
                break;
    case '/': //#
                top = stapel.back(); stapel.pop_back();//#
                second = stapel.back(); stapel.pop_back();//#
        stapel.push_back(second / top);//#
        break;//#
    case '%'://#
                top = stapel.back(); stapel.pop_back();//#
                second = stapel.back(); stapel.pop_back();//#
        stapel.push_back(second % top);//#
        break;//#
    case 'c'://#
        stapel.clear();//#
        break;//#
    case ':'://#
                top = stapel.back(); stapel.pop_back();//#
                second = stapel.back(); stapel.pop_back();//#
        stapel.push_back(top);//#
        stapel.push_back(second);//#
        break;//#
            case @'@=@'@:
                for(int elem : stapel) { out << elem; }
                out << "\n";
                break;
            case @'@ @'@:
                break;
            default:
                out << "\n'" << c << "' verstehe ich nicht.\n";
            } /* switch */
        } /* for c */
    }
    int main(int argc, const char* argv[]) {
        if(argc > 1) {
            rechner(std::cout, argv[1]);
        } else {
            // 3 + 4 * 5 + 6 mit Punkt- vor Strichrechnung ergibt 29
            rechner(std::cout, "345*+6+=");
            //= 29
        }
        rechner(std::cout, "93-="); //#
        //= 6
        rechner(std::cout, "82/="); //#
        //= 4
        rechner(std::cout, "92%="); //#
        //= 1
    }



