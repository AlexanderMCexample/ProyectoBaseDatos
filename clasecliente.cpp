#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
#include "clasecliente.h" //Clase Cliente
using namespace std;   

void Cliente::imprimirVoucher_Clientes()
{
    voucher.imprimirDatosVoucher();
    voucher.imprimirGastos();



}

void Cliente::compra()
{
	voucher.setGastos();
}
