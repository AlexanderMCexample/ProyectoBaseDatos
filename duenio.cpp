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
    registroVenta.imprimirVoucher();
}

void Propietario::imprimirAlmacen(){
    registroVenta.imprimirAlmacen();
}

void Propietario::ganancias(){
    registroVenta.ganancia();
}
void Propietario::gastos(){
    registroVenta.gasto();
}