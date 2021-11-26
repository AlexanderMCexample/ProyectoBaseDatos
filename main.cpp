#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases

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
  int numeroCliente=0;
  int numeroPropietarios=0;

  cout << "Ingrese el número de clientes estimados del día: "<<endl;
  cin >> numeroCliente;
  cout << "Ingrese el número de Propietarios del local: "<<endl;
  cin >> numeroPropietarios;
  OpcionesMenu op(numeroCliente,numeroPropietarios);


  op.menuOpciones();
  return 0;
}