#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases
#include "registroVenta.h" //clase Tablas

using namespace std;    

RegistroVenta::RegistroVenta(int _dia = 0, double _capital = 0):
Tablas(_dia,_capital),numeroVentas(0),numeroGastos(0)
{}

RegistroVenta::~RegistroVenta()
    {
        numeroVentas = 0;
        numeroGastos = 0;
    }

void RegistroVenta::setNumeroVentas(int _numeroVentas)
{
    numeroVentas = _numeroVentas;
}
void RegistroVenta::setNumeroGastos(int _numeroGastos)
{
    numeroGastos = _numeroGastos;
}
int RegistroVenta::getNumeroVentas()
{
    return numeroVentas;
}
int RegistroVenta::getNumeroGastos()
{
    return numeroGastos;
}
void RegistroVenta::incrementarNumeroVentas(int incremento)
{
    numeroVentas += incremento;
}
void RegistroVenta::incrementarNumeroGastos(int incremento)
{
    numeroGastos += incremento;
}
void RegistroVenta::imprimirNumeroComprasVentas()
{
    cout << "Realizo "<< numeroVentas << " ventas" <<endl;
    imprimirGanacias();
    cout << "Realizo "<< numeroGastos << " compras" <<endl;
    imprimirGastos();
}