#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases
#include "voucherganancia.h" //clase Tablas

using namespace std;    

void VoucherGanancia::gasto(){
    ing.Tienda();
    ing.Comprar(tab);
}

void VoucherGanancia::ganancia(){
    double ganancia=0;
    tab.setGanancia(ganancia);
    ing.incrementarDinero(ganancia);    
}

void VoucherGanancia::imprimirVoucher(){
    tab.imprimirTabla();
}


