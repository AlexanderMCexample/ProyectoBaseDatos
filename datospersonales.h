#include <cstring> //para strcpy
#include <conio.h> //gets()
#include <iostream>
class Datos_personales{
public:
    std::string nombre;
    std::string direccion;
    std::string ttarjeta;
    int ntarjeta;
    int ctarjeta;
    
    //Constructores
    Datos_personales();
    
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