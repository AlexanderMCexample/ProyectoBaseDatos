#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
#include "clasecliente.h" //Clase Cliente
using namespace std;   

//Constructor
Cliente::Cliente(std::string _nombre = "Sin respuesta", std::string _direccion = "Sin respuesta", std::string _ttarjeta = "Sin respuesta", int _ntarjeta = 0, int _ctarjeta = 0) :
Datos_personales(_nombre,_direccion,_ttarjeta,_ntarjeta,_ctarjeta), numeroCompras(0)
{}
Cliente::~Cliente()
{
    numeroCompras=0;
}
void Cliente::setNumeroCompras(int numero)
{
    numeroCompras = numero;
}
int Cliente::getNumeroCompras()
{
    return numeroCompras;
}
void Cliente::incrementarNumeroCompras(int incremento)
{
    numeroCompras += incremento;
}
void Cliente::imprimirNumeroCompras()
{
    cout << "Realizo "<< numeroCompras << " compras totales" <<endl;
}