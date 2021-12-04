#include <cstring> //para strcpy
#include <conio.h> //gets()
#include <iostream>
class Datos_personales{
public:
    DatosIngresos datos;//evitar tener errores al ingresar datos 
    std::string nombre;
    std::string direccion;
    std::string ttarjeta;
    int ntarjeta;
    int ctarjeta;
    
    //Constructores
    Datos_personales(std::string _nombre, std::string _direccion, std::string _ttarjeta, int _ntarjeta, int _ctarjeta);
    ~Datos_personales();
    //Metodos
    void imprimirDatos();
    void setDatos();

    void getNombre(std::string &_nombre);
    void getNumeroTarjeta(int &_ntarjeta);
    void getTipoTarjeta(std::string &_ttarjeta);
    std::string getNombre();
    std::string getTipoTarjeta();
    int getNumeroTarjeta();
};