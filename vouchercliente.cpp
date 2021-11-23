#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//Clases
#include "vouchercliente.h"

void Voucher_Clientes::imprimirDatosVoucher(char _nombre[20], int _ntarjeta, char _ttarjeta[20])
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
		cout<<"Compra "<<i+1<<")"<<gastos[i]<<"\n";
	}
}

void Voucher_Clientes::setGastos()
{
	platos.Vender(gastos, control_gastos);
}
