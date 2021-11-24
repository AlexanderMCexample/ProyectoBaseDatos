#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases
#include "tablas.h" //clase Tablas

using namespace std;    

Tablas::Tablas(int _dia = 0, double _capital = 0):
dia(_dia),capital(_capital),controlGanancias(0),controlGastos(0)
{ //contructor del los valroes y para inicializar las listas
  for(int i=0;i<100;i++){
      gastos[i]=0;
      ganancias[i]=0;
      nombreGastos[i] ="";
      nombreGanancias[i] ="";
  }
}

void Tablas::imprimirTabla()
{
  cout << "====================================\n";
  cout << "Dia "<<dia<<endl;
  cout << " Capital inicial: "<<capital<<endl;
  imprimirGanacias();
  imprimirGastos();  
  cout << " Capital final: " << capital + totalGanancias() - totalGastos() <<endl;
  cout << "====================================\n\n";
}

void Tablas::setGanancia()
{
  std::string a;
  cin.ignore(10000,'\n'); //ignore para eliminar el el último enter[\n] realizado en un cin para poder acceder al gets de no poner esto no se puede acceder al gets o getline
  cout <<"Ingrese el nombre de la ganancia: ";
  getline(cin,a);
  nombreGanancias[controlGanancias] = a;
  cout << "\nIngrese el monto de la ganancia: ";
  cin >> ganancias[controlGanancias];
  cout <<endl;
  controlGanancias++; //control ganancia es el tamaño actual de la lista
}

void Tablas::setGanancia(double &_ganancia)
{
  std::string a;
  cin.ignore(10000,'\n'); //ignore para eliminar el el último enter[\n] realizado en un cin para poder acceder al gets de no poner esto no se puede acceder al gets o getline
  cout <<"Ingrese el nombre de la ganancia: ";
  getline(cin,a);
  nombreGanancias[controlGanancias] = a;
  cout << "\nIngrese el monto de la ganancia: ";
  cin >> ganancias[controlGanancias];
  _ganancia = ganancias[controlGanancias]; //para pasar el dato valor de la ganancia por referencia
  cout <<endl;
  controlGanancias++; //control ganancia es el tamaño actual de la lista
}

void Tablas::setGasto()
{
  cin.ignore(10000,'\n');//ignore para eliminar el el último enter[\n] realizado en un cin para poder acceder al gets de no poner esto no se puede acceder al gets o getline
  std::string a;
  cout <<"Ingrese el nombre del gasto: ";
  getline(cin,a);
  nombreGastos[controlGastos]=a;
  cout << "\nIngrese el monto del gasto: ";
  cin >> gastos[controlGastos];
  cout <<endl;
  controlGastos++; //control gastos es el tamaño actual de la lista
}

void Tablas::setGasto(std::string _nombreGasto, double _gasto)
{
  cin.ignore(10000,'\n');//ignore para eliminar el el último enter[\n] realizado en un cin para poder acceder al gets de no poner esto no se puede acceder al gets o getline
  nombreGastos[controlGastos]=_nombreGasto;
  gastos[controlGastos] = _gasto;
  controlGastos++; //control gastos es el tamaño actual de la lista
}

void Tablas::imprimirGanacias()
{ //obtener la lista y total de ganancias
  cout << " Ganancias: " << totalGanancias() <<endl;
  for(int i = 0; i<controlGanancias;i++){
    if(nombreGanancias[i] != ""){
      cout <<"    "<< i+1 << ") " << nombreGanancias[i] << ": "<< ganancias[i] << endl;  
    }
  }
}

void Tablas::imprimirGastos()
{//obtener la lista y total de gastos
  cout << " Gastos: "<< totalGastos() <<endl;
  for(int i = 0; i<controlGastos;i++){
    if(nombreGastos[i] != ""){
      cout <<"    "<< i+1 << ") " << nombreGastos[i] << ": "<< gastos[i] << endl;  
    }
  }
}

void Tablas::deleteGanancia()
{
  int a;
  cout << " Escriba el número que desee eliminar: ";
  cin >> a;
  if(controlGanancias>=a&&a>=1) //para evitar eliminar un elemento que no esta en la lista
  {
    controlGanancias-=1; //como el control se ingrementa en uno al hacer set ganancias debo restarle 1 para poder hacer el recorrido actual de la  lista
    for(int i=0;i<=controlGanancias;i++) //ordena la lista al eliminar cualquier elemento para no dejar huecos en la lista 
    {
      ganancias[a+i-1] = ganancias[a+i];
      nombreGanancias[a+i-1] = nombreGanancias[a+i];
    }
  }
}

void Tablas::deleteGasto()
{
  int a;
  cout << " Escriba el gasto que desee eliminar: ";
  cin >> a;
  if(controlGastos>=a&&a>=1) //para evitar eliminar un elemento que no esta en la lista
  {
    controlGastos-=1;//como el control se ingrementa en uno al hacer set ganancias debo restarle 1 para poder hacer el recorrido actual de la  lista
    for(int i=0;i<=controlGastos;i++)//ordena la lista al eliminar cualquier elemento para no dejar huecos en la lista 
    {
      gastos[a+i-1] = gastos[a+i];
      nombreGastos[a+i-1] = nombreGastos[a+i];
    }
  }
}

double Tablas::totalGanancias()
{
  double sumaGanancias=0;
  for(int i=0; i < controlGanancias; i++){ //suma total de las ganancias de la lista actual | el control es el tamaño actual de la lista + 1 por eso el menor y no menor igual
    sumaGanancias += ganancias[i];
  }
  return sumaGanancias;
}

double Tablas::totalGastos()
{
  double sumaGastos=0;
  for(int i=0; i < controlGastos; i++){ //suma total de gastos de la lista actual | el control es el tamaño actual de la lista + 1 por eso el menor y no menor igual
    sumaGastos += gastos[i];
  }
  return sumaGastos;
}

void Tablas::getGanacia(int _getGanancia, double &_ganancia, std::string &_nombreGanancia){
  if(_getGanancia>=0 && _getGanancia<controlGanancias){
    _ganancia = ganancias[_getGanancia];
    _nombreGanancia = nombreGanancias[_getGanancia];
  }
}

void Tablas::getGasto(int _getGasto, double &_gasto, std::string &_nombreGasto){
  if(_getGasto>=0 && _getGasto<controlGastos){
    _gasto = gastos[_getGasto];
    _nombreGasto = nombreGastos[_getGasto];
  }
}


void Tablas::menu()
{
  int opcion=0;
  int a=0;
  double _ganancia=0,_gasto=0;
  std::string _nombreGanancia,_nombreGasto;
  do{
    cout << "Seleccione una opción"<<endl;
    cout << "1) Ingresar una ganancia" << endl;
    cout << "2) Ingresar un gasto" << endl;
    cout << "3) Eliminar una ganancia" << endl;
    cout << "4) Eliminar un gasto" << endl;
    cout << "5) Imprimir tabla" << endl;
    cout << "6) Obtener una ganancia" << endl;
    cout << "7) Obtener un gasto" << endl;
    cout << "0) Salir\n\n";
    cin >> opcion;
    
    switch (opcion)
    {
    case 1:
      setGanancia(); //colocar una ganancia
      break;
    case 2:
      setGasto(); //colocar un gasto
      break;
    case 3:
      imprimirGanacias();
      deleteGanancia(); // eliminar una ganancia
      break;
    case 4:
      imprimirGastos();
      deleteGasto(); //eliminar un gasto
      break;
    case 5:
      imprimirTabla(); // imprimir la tabla del día
      break;
    case 6:
      imprimirGanacias();
      cout << "Que ganancia desea obtener: ";
      cin >> a;
      getGanacia(a-1,_ganancia,_nombreGanancia);
      cout << "La ganancia de "<<_nombreGanancia<< " es: " << _ganancia <<"\n\n"; // imprimir la tabla del día
      break;
    case 7:
      imprimirGastos();
      cout << "Que gasto desea obtener: ";
      cin >> a;
      getGasto(a-1,_gasto,_nombreGasto); // imprimir la tabla del día
      cout << "El gasto de "<<_nombreGasto<< " es: " << _gasto <<"\n\n";
      break;
    default: 
      break;
    }
  }while(opcion!=0);
}