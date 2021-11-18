#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases

//#include "datospersonales.cpp" //clase Datos_Personales
#include "voucherganancia.cpp"
#include "vouchercliente.cpp" //clase vouchercliente
using namespace std;


void tablas(){
    //CREACION DE LA LISTA DE CLASES TABLAS====================================== 
  //===========================================================================

  //Tablas tab(1,500),tab2(2,6000); //== Tablas tab[2]
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


void voucherGanancia()
{
  int dia;
  double capital;
  cout << "Que número de día es: ";
  cin >> dia;
  cout << "\n¿Cúal es su capital actual? ";
  cin >> capital;
  cout << endl;
  VoucherGanancia voucherG(dia,capital);
  voucherG.ganancia();
  voucherG.gasto();
  voucherG.imprimirVoucher();
}

void voucherclientes()
{

  Voucher_Clientes dos;

  dos.imprimirVoucher_Clientes();

}