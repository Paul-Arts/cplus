    #include <iostream> //#
    auto maxOf2(int a, int b) {
        return a<b ? b : a;   // Ein return: Der Compiler ermittelt int
    }
    auto minOf3(int a, int b, int c) {
         if(a<b) return a<c ? a : c;
         else return b<c ? b : c;
    }
    auto medianOf3(int a, int b, int c) {
         // komplexer, aber kein Problem f?r den Compiler
         return minOf3(maxOf2(a,b), maxOf2(b,c), maxOf2(a,c));
    }
    int main() { //#
        std::cout << medianOf3(1,2,3) << " "; //#
        std::cout << medianOf3(1,3,2) << " "; //#
        std::cout << medianOf3(2,1,3) << " "; //#
        std::cout << medianOf3(2,3,1) << " "; //#
        std::cout << medianOf3(3,2,1) << " "; //#
        std::cout << medianOf3(3,1,2) << "\n"; //#
        //= 2 2 2 2 2 2
    } //#




