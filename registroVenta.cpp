#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases
#include "registroVenta.h" //clase Tablas

using namespace std;    

void RegistroVenta::gasto(){
    ing.Tienda(); //imprimir los elementos tienda
    ing.Comprar(tab); //
}

void RegistroVenta::ganancia(){
    double ganancia=0;
    tab.setGanancia(ganancia);
    ing.incrementarDinero(ganancia);    
}

void RegistroVenta::imprimirVoucher(){
    tab.imprimirTabla();
}

void RegistroVenta::imprimirAlmacen(){
    ing.imprimirAlmacen();
}
