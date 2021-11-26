#include <cstring> //para strcpy
#include <conio.h> //gets()
//clases
//#include "Platillos.cpp"

class Voucher_Clientes {
    //Atributos
    public:
    int control_gastos;
    double gastos[100];
	
    //Constructor
    Voucher_Clientes();

    //Metodos
    void imprimirDatosVoucher(std::string _nombre, int _ntarjeta, std::string _ttarjeta);
    void imprimirGastos();
};