    #include "36meinwert-def.cpp" //#
    void funktion(const MeinWert &paramRef) {
        MeinWert lokalWert{"lokal"};
        (void)paramRef;//#
    }

    int main() {
        MeinWert mwert1{"mwert1"};
        funktion( MeinWert{"temp"} );
        funktion( mwert1 );
        {
            MeinWert mwert2{"mwert2"};
            (void)mwert2;//#
        }
        (void)mwert1;//#
    }


