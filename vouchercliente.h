#include <cstring> //para strcpy
#include <conio.h> //gets()
//clases
#include "Platillos.cpp"

class Voucher_Clientes {
    //Atributos
    public:

    Platillos platos;
    int control_gastos;
    double gastos[100];
	
    //Constructor
    Voucher_Clientes(){
    	control_gastos=0;
    	platos.Crear2();
    	for(int i=0;i<100;i++)
		{
        	gastos[i]=0;
        }
    }

    //Metodos

    void imprimirDatosVoucher(char _nombre[20], int _ntarjeta, char _ttarjeta[20]);
    void imprimirGastos();
    void setGastos();
};