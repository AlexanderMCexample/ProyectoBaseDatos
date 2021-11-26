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

  //  menuOpciones();
  OpcionesMenu op;
  op.menuOpciones();
  
  return 0;
}