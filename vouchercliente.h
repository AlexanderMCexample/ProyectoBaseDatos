#include <cstring> //para strcpy
#include <conio.h> //gets()
//clases


class Voucher_Clientes {
    //Atributos
    public:
    Datos_personales datos;
    char nombre[20];
    char ttarjeta[20];
    int ntarjeta;


    //Constructor
    Voucher_Clientes(){
    }

    //Metodos
    void imprimirDatosVoucher();
    void setDatos();
};