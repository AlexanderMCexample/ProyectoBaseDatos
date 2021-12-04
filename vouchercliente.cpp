#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//Clases
#include "vouchercliente.h"

Voucher_Clientes::Voucher_Clientes():control_gastos(0)
{
    for(int i=0;i<100;i++)
    {
        gastos[i]=0;
        nombre[i]="";
    }
}
Voucher_Clientes::~Voucher_Clientes()
{
    for (int i=0;i<=100;i++)
    {
        gastos[i]=0;
        nombre[i]="";
    }
    control_gastos=0;
}
void Voucher_Clientes::imprimirDatosVoucher(std::string _nombre, int _ntarjeta, std::string _ttarjeta)
{
    std::cout << "Generando Vaucher......" << "\n";

    std::cout << "--------Datos Personales--------" << "\n";
    std::cout << "Nombre: " << _nombre << "\n";
    std::cout << "Tipo de Tarjeta: "<< _ttarjeta << "\n";
    std::cout << "Numero de Tarjeta: " << _ntarjeta <<  "\n";
    std::cout << "\n";

}
void Voucher_Clientes::imprimirGastos()
{
	cout << "--------Gastos--------" << "\n";
	for (int i=0 ; i<control_gastos ; i++)
	{
        cout <<"    "<< i+1 << ") " << nombre[i] << ": "<< gastos[i] << endl;  
    }
	
}

void Voucher_Clientes::guardarCompra(std::string _nombreCompra, double _precio)
{
  nombre[control_gastos]=_nombreCompra;
  gastos[control_gastos] = _precio;
  control_gastos++; 
}

