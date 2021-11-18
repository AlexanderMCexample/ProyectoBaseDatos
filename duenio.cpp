
#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases
#include "duenio.h" //clase Tablas

using namespace std;    

void Propietario::setDatosPropietario(){
    datosPropietario.setDatos();
}

void Propietario::imprimirTabla(){
    voucher.imprimirVoucher();
}

void Propietario::imprimirAlmacen(){
    voucher.imprimirAlmacen();
}

void Propietario::ganancias(){
    voucher.ganancia();
}
void Propietario::gastos(){
    voucher.gasto();
}