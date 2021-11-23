#include <cstring> //para strcpy
#include <conio.h> //gets()

class Cliente {
    //Atributos
    public:
    Voucher_Clientes voucher;
    Datos_personales datos;
    char nombre[20];
    char ttarjeta[20];
    int ntarjeta;

    //Constructor
    Cliente(){
        ntarjeta = 0;
        strcpy(nombre,"");
        strcpy(ttarjeta,"");
    }
    
    //Metodos
    void imprimirVoucher_Clientes();
    void compra();
    void setDatos();
};
