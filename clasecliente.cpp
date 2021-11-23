#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
#include "clasecliente.h" //Clase Cliente
using namespace std;   

void Cliente::imprimirVoucher_Clientes() //Llamamos nuestra funcion imprimir Voucher para mostrar en pantalla el Voucher completo
{
    voucher.imprimirDatosVoucher(nombre,ntarjeta,ttarjeta);
    voucher.imprimirGastos();
}

void Cliente::compra()
{
	voucher.setGastos();
}

void Cliente::setDatos()
{
    datos.setDatos(); //ingresar datos
    datos.getNombre(nombre); 
    datos.getTipoTarjeta(ttarjeta);
    datos.getNumeroTarjeta(ntarjeta);
}
