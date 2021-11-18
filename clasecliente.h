#include <cstring> //para strcpy
#include <conio.h> //gets()

class Cliente {
    //Atributos
    public:
    Voucher_Clientes voucher; //LLamamos nuestra clase Voucher_Cliente
    
    //Constructor
    Cliente(){
        voucher.setDatos();
    }



    
    //Metodos
    void imprimirVoucher_Clientes(); //Imprimir Voucher Clientes


};