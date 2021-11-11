#include <iostream>
#include "myLib.h"
using namespace std;    

int main() 
{

  cout << "\n" << "\n" << "Bienvenido cliente.... Por favor ingresar sus datos" << "\n" ;

  Datos_personales uno;
  
  uno.setDatos();

  uno.imprimirDatos();  

  char nombre[100];
  uno.getNombre(nombre);
  cout<<nombre <<endl;


  return 0;
}
