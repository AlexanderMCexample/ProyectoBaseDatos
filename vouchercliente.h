#include <cstring> //para strcpy
#include <conio.h> //gets()
//clases
#include "Platillos.cpp"

class Voucher_Clientes {
    //Atributos
    public:
    Platillos platos;
    Datos_personales datos;
    char nombre[20];
    char ttarjeta[20];
    int ntarjeta, control_gastos;
    double gastos[100];
	

    //Constructor
    Voucher_Clientes(){
    	control_gastos=0;
    	platos.Crear2();
    	for(int i=0;i<100;i++)
		{
        	gastos[i]=0;
        }
        strcpy(nombre,"");
        strcpy(ttarjeta,"");
    }

    //Metodos
    void imprimirDatosVoucher();
    void setDatos();
    void imprimirGastos();
    void setGastos();
};
