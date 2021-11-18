#include <cstring> //para strcpy
#include <conio.h> //gets()

class Cliente {
    //Atributos
    public:
    Voucher_Clientes voucher;
    
    //Constructor
    Cliente(){
        voucher.setDatos();
    }



    
    //Metodos
    void imprimirVoucher_Clientes();


};