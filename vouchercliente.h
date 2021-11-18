#include <cstring> //para strcpy
#include <conio.h> //gets()
//clases

#include "datospersonales.cpp"

class Voucher_Clientes {
//Atributos
public:
    Datos_personales datos;

//Constructor
    Voucher_Clientes(){
        datos = Datos_personales();
    }

//Metodos

void imprimirVoucher_Clientes();

};