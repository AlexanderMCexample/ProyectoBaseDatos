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
//#include "platillos.cpp"

#include "clasecliente.cpp" //clase Cliente
#include "duenio.cpp"
using namespace std;

void dueño()
{
  int opcion=0;
  do
  {
    cout << "\n\n======Dueño======\n\n";
    cout << "A que modo deseea entrar: \n";
    cout<<" 1) Colocar Datos personales\n";
    cout<<" 2) Imprimir Almacen\n";
    cout<<" 3) Imprimir Registro\n";
    cout<<" 4) Realizar compras de ingredientes\n";
    cout<<" 0) Salir\n\n";
    cin >> opcion;
    cin.ignore(10000,'\n');

    switch (opcion)
    {
      case 1:
        break;
      case 2:
        break;            
      default:
        break;
    }
    
  } while (opcion!=0);
}

void menu()
{
  
  int opcion=0; //para ingresar a una tabla
  do{
    cout << "\n\n======Menu======\n\n";
    cout << "A que modo deseea entrar: \n";
    cout<<" 1) Cliente\n";
    cout<<" 2) Dueño\n";
    cout<<" 0) Salir\n\n";

    cin >> opcion;
    cin.ignore(10000,'\n');
    switch (opcion)
    {
      case 1:
        break;
      case 2:
        break;            
      default:
        break;
    }

  }while(opcion!=0);

}

