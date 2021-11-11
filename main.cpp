#include <iostream>
#include "myLib.h"
using namespace std;    

void tablas();
void ingredientes();
void datosPersonales();

int main() 
{
  tablas(); //clase tablas
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  ingredientes(); //clase ingredientes
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  datosPersonales(); // clase datos personales

  return 0;
}




void tablas(){
    //CREACION DE LA LISTA DE CLASES TABLAS====================================== 
  //===========================================================================

  //Tablas tab(1,500,"casa"),tab2(2,6000,"Master"); //== Tablas tab[2]
  Tablas tab[5]; //creación de una lista de objetos de la clase [5 objetos]

  for(int i=0;i<5;i++){ //inicializando con el constructor los objetos con el día y la capital
    tab[i] = Tablas(i+1,500);
  }

  cout << "=============Muestra de todas las tablas=================="<<endl;
  for(int i=0;i<5;i++){ //imprimir las tablas creadas de la lista
    tab[i].imprimirTabla();
  }
  

  int opcion=0; //para ingresar a una tabla
  do{
    cout << "A que tabla deseea entrar: \n";
    for(int i=1;i<=5;i++){
      cout<<" "<<i<<") "<<endl;
    }
    cout<<" "<<0<<") Salir\n\n";

    cin >> opcion;    
    switch (opcion)
    {
    case 0:
      break;    
    default:
      tab[opcion-1].menu(); //ingresar al menu de la tabla seleccionada [mylib.cpp]
      break;
    }

  }while(opcion!=0);
  //===========================================================================
  //=========================================================================== 
}

void ingredientes()
{
    Ingredientes primero(500);
  	primero.Crear();
  	
  	primero.menu();

}

void datosPersonales()
{
    cout << "\n" << "\n" << "Bienvenido cliente.... Por favor ingresar sus datos" << "\n" ;

  Datos_personales uno;
  
  uno.setDatos();

  uno.imprimirDatos();  

  char nombre[100];
  uno.getNombre(nombre);
  cout<<nombre <<endl;


}