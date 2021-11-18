#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//Clases
#include "vouchercliente.h"

void Voucher_Clientes::setDatos()
{
    datos.setDatos();
    datos.getNombre(nombre);
    datos.getTipoTarjeta(ttarjeta);
    datos.getNumeroTarjeta(ntarjeta);
}

void Voucher_Clientes::imprimirDatosVoucher()
{



    std::cout << "Generando Vaucher......" << "\n";

    std::cout << "--------Datos Personales--------" << "\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Tipo de Tarjeta: "<< ttarjeta << "\n";
    std::cout << "Numero de Tarjeta: " << ntarjeta <<  "\n";
    std::cout << "\n";
  

}

