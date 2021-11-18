#include <cstring> //para strcpy
#include <conio.h> //gets()
//clases


class Voucher_Clientes {
    //Atributos
    public:
    Datos_personales datos; //Llamamos nuestra clase Datos_personales dentro de la clase Voucher
    char nombre[20];
    char ttarjeta[20];
    int ntarjeta;


    //Constructor
    Voucher_Clientes(){
    }

    //Metodos
    void imprimirDatosVoucher(); //Imprimir los datos personales en nuestro Voucher
    void setDatos(); //Almacener los datos necesarios par nuestro voucher y futuros metodos
};