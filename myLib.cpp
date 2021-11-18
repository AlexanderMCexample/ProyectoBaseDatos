#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases
#include "datospersonales.cpp"
#include "tablas.cpp"
#include "ingredientes.cpp"

#include "voucherganancia.cpp"
#include "vouchercliente.cpp" //clase vouchercliente
//#include "platillos.cpp"

#include "clasecliente.cpp" //clase Cliente
#include "duenio.cpp"
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
  dos.setDatos();
  dos.imprimirDatosVoucher();

}


void platillos()
{
	Platillos segundo;
	segundo.Crear2();
	segundo.Vender();
}

void clientes()
{
  cout << "\n\nBienvenido mi estimado Cliente\n\n";
	Cliente client;
  cout << "\n\n==Realizar Una Compra==\n\n";
	client.compra();
  cout << "\n\n";
	client.imprimirVoucher_Clientes();
}

void propietario()
{
  cout << "\n\nBienvenido Dueño 1\n\n";
  Propietario propie;
  cin.ignore(10000,'\n');
  propie.setDatosPropietario();
  int dia;
  double capital;
  cout << "\n\n Datos para construir su tabla\n\n";
  cout << "Que número de día es: ";
  cin >> dia;
  cout << "\n¿Cúal es su capital actual? ";
  cin >> capital;
  cout << endl;
  propie = Propietario(dia,capital);

  cout << "\n\n==Aquí ingrese una ganancia==\n\n";
  propie.ganancias();
  propie.gastos();
  cout << "\n\n===Almacén===\n\n";
  propie.imprimirAlmacen();
  cout << "\n\n===Voucher===\n\n";
  propie.imprimirTabla();
}
