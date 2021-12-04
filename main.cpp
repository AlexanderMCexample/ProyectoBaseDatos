//Universidad Católica San Pablo
//curso: Ciencias de la Computación CCOMP2 -1
//Grupo:
//    - Alexander Rafael Murillo Castillo
//    - Jaime Mateo Gutierrez Muñoz
//    - Emmanuel Del Piero Martinez Salcedo
//Profesor:
//    - DSc. Manuel Eduardo Loaiza Fernández 
//Semestre 2021 - II
//Arequipa - Perú
//
//GITHUB: https://github.com/AlexanderMCexample/ProyectoBaseDatos
//Código ejecutado en VisualStudio


#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases
#include "ingresoDatos.cpp" 
#include "datospersonales.cpp"
#include "tablas.cpp"
#include "ingredientes.cpp"
#include "registroVenta.cpp"
#include "vouchercliente.cpp" //clase vouchercliente
#include "platillos.cpp"
#include "clasecliente.cpp" //clase Cliente
#include "duenio.cpp"
#include "opcionesMenu.cpp"
 
int main() 
{
  DatosIngresos datos;//evitar tener errores al ingresar datos 
  int numeroCliente=0;
  int numeroPropietarios=0;
  
  cout << "Ingrese el número de clientes estimados del día: "<<endl;
  datos.variables_rango(numeroCliente,20,1);
  cout << "Ingrese el número de Propietarios del local: "<<endl;
  datos.variables_rango(numeroPropietarios,50,1);
  OpcionesMenu op(numeroCliente,numeroPropietarios);
  op.menuOpciones();
  return 0;
}