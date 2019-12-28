    class Motor { //#
    public: //#
      Motor(int anzZylinder); //#
      void start();                 //#
    }; //#
    class Auto {
    public:
      Auto() : motor_{8} { }           // Initialisiert ein Auto mit 8 Zylindern
      void start() { motor_.start(); } // Startet Auto durch Starten des Motors
    private:
      Motor motor_;                    // Auto hat-einen Motor
    };


