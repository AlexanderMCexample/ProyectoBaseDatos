class Propietario:public Datos_personales {
    //atributos
    public:
    std::string contrasena;
    //constructores
    Propietario(std::string, std::string, std::string, int, int);
    
    ~Propietario();

    //Metodos
    void setContrasena();
    std::string getContrasena();
    bool confirmeContrasena();
    bool contrasenaVacia();
    bool accesoContrasenaPropietario();
};