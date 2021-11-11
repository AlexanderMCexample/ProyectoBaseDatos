#include <cstring> //para strcpy
#include <conio.h> //gets()
//Datos Personales
//Clientes y Dueño
class Datos_personales{
public:
    char nombre[100];
    char direccion[100];
    char ttarjeta[100];
    int ntarjeta;
    int ctarjeta;
    
    //Constructores
    Datos_personales(){
        strcpy(nombre,"Sin respuesta");
        strcpy(direccion,"Sin respuesta");
        strcpy(ttarjeta,"Sin respuesta");
        ntarjeta = 0;
        ctarjeta = 0;
        std::cout << "\n" << "\n" <<  "Listo para recibir datos del cliente" <<  "\n" << "\n" ;
    }
    
    //Metodos
    void imprimirDatos();
    void setDatos();

    void getNombre(char _nombre[100]);
};