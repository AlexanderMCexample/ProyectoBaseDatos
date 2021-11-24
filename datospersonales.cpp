#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases

#include "datospersonales.h" //clase Datos_Personales

using namespace std;   


//Constructor
Datos_personales::Datos_personales():
nombre("Sin respuesta"),direccion("Sin respuesta"),ttarjeta("Sin respuesta"), ntarjeta(0), ctarjeta(0)
{}







void Datos_personales::setDatos()
{
  std::string perfil;
  //cin.ignore(10000,'\n');
  cout << "Ingresar nombre: " << "\n";
  getline(cin,perfil);
  nombre=perfil;
  cout << "Ingresar Direccion: " << "\n";
  getline(cin,perfil);
  direccion=perfil;  
  cout << "Ingresar tipo de Tarjeta de Credito: " << "\n";
  getline(cin,perfil);
  ttarjeta=perfil;
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

void Datos_personales::getNombre(std::string &_nombre)
{
  _nombre=nombre;
}

void Datos_personales::getTipoTarjeta(std::string &_ttarjeta)
{
  _ttarjeta=ttarjeta;
}
void Datos_personales::getNumeroTarjeta(int &_ntarjeta)
{
  _ntarjeta = ntarjeta;
}

