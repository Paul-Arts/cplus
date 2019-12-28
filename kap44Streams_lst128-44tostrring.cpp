    #include <fstream>
    int main() {
        std::ofstream file("logfile.log");
        file << "Text f?r das Protokoll";
        file.flush();
    }

