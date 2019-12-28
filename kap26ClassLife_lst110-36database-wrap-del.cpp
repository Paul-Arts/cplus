    #include <iostream>                                // cout
    #if 0 //#
    #include "database.hpp"            // Einbinden der fremden Programmierschnittstelle
    #endif //#
    struct db_handle_t {}; //#
    db_handle_t db_open(const char*); //#
    void db_close(db_handle_t); //#
    int db_execute(db_handle_t, const char*); //#

    class Database {
        const db_handle_t db_;                         // konstant machen
    public:
        Database(const char* filename);
        ~Database();
        int execute(const char* query);
        Database(const Database&) = delete;            // Kopieren verbieten
        Database& operator=(const Database&) = delete; // Zuweisung verbieten
    };
    // ... Implementierungen wie gehabt ...
    Database::Database(const char* filename) //#
        : db_{ db_open(filename) }//#
        { }//#
    Database::~Database() {//#
        db_close(db_);//#
    }//#
    int Database::execute(const char* query) {//#
        return db_execute(db_, query);//#
    }//#

    int main() {
        Database db{ "kunden.dat" };
        std::cout << "Anzahl: "<< db.execute("select * from kunden") << "\n";
        //= Anzahl: 5
    #if 0 //#
        Database db2{ db }; // Compiler verhindert gef?hrliche Kopie
        db = db2;           // Compiler verhindert gef?hrliche Zuweisung
    #endif //#
    }


