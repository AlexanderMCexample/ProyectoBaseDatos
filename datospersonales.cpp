#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases

#include "datospersonales.h" //clase Datos_Personales

using namespace std;   

void Datos_personales::setDatos()
{
  char perfil[100];
  cin.ignore(10000,'\n');
  cout << "Ingresar nombre: " << "\n";
  gets(perfil);
  strcpy(nombre,perfil);
  cout << "Ingresar Direccion: " << "\n";
  gets(perfil);
  strcpy(direccion,perfil);  
  cout << "Ingresar tipo de Tarjeta de Credito: " << "\n";
  gets(perfil);
  strcpy(ttarjeta,perfil);
  cout << "Ingresar numero de Tarjeta: " << "\n";
  cin >> ntarjeta;
  cout << "Ingresar su contraseña: " << "\n";
  cin >> ctarjeta;  
  cout << "Datos recibidos..... confirmando....." << "\n";
}

void Datos_personales::imprimirDatos()
{
  cout << "\n" ;
  cout << "Nombre: " << nombre << "\n";
  cout << "Direccion: " << direccion << "\n";
  cout << "Tipo de Tarjeta: " << ttarjeta << "\n";
  cout << "Numero de Tarjeta: " << ntarjeta << "\n";
  cout << "Contrasena de Tarjeta: " << ctarjeta << "\n";

}

void Datos_personales::getNombre(char _nombre[100])
{
  strcpy(_nombre,nombre);
}

void Datos_personales::getTipoTarjeta(char _ttarjeta[100])
{
  strcpy(_ttarjeta,ttarjeta);
}
void Datos_personales::getNumeroTarjeta(int &_ntarjeta)
{
  _ntarjeta = ntarjeta;
}

