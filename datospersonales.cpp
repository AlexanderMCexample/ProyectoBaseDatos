#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases

#include "datospersonales.h" //clase Datos_Personales

using namespace std;   


//Constructor
Datos_personales::Datos_personales(std::string _nombre = "Sin respuesta", std::string _direccion = "Sin respuesta", std::string _ttarjeta = "Sin respuesta", int _ntarjeta = 0, int _ctarjeta = 0):
nombre(_nombre),direccion(_direccion),ttarjeta(_ttarjeta), ntarjeta(_ntarjeta), ctarjeta(_ctarjeta)
{}
Datos_personales::~Datos_personales()
{
  nombre="";
  direccion="";
  ttarjeta="";
  ntarjeta=0;
  ctarjeta=0;
}

void Datos_personales::setDatos()
{
  std::string perfil;
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
  datos.ingresoNumero(ntarjeta);
  cout << "Ingresar su contraseña: " << "\n";
  datos.ingresoNumero(ctarjeta);
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


std::string Datos_personales::getNombre()
{
  return nombre;
}

std::string Datos_personales::getTipoTarjeta()
{
  return ttarjeta;
}
int Datos_personales::getNumeroTarjeta()
{
  return ntarjeta;
}


