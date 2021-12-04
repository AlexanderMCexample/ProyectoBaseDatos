#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases
#include "duenio.h" //clase Tablas

using namespace std;    

//Constructor
Propietario::Propietario(std::string _nombre = "Sin respuesta", std::string _direccion = "Sin respuesta", std::string _ttarjeta = "Sin respuesta", int _ntarjeta = 0, int _ctarjeta = 0) :
Datos_personales(_nombre,_direccion,_ttarjeta,_ntarjeta,_ctarjeta), contrasena("")
{}

Propietario::~Propietario()
{
    contrasena = "";
}

void Propietario::setContrasena()
{
    cout << "Registre su nueva contraseña (asegure recordarla): "<<endl;
    getline(cin,contrasena);

}
std::string Propietario::getContrasena()
{
    return contrasena;
}
bool Propietario::confirmeContrasena() //confirmar el ingreso de la contrasena
{

    std::string _contrasena = "";
    cout << "Ingrese la contraseña: "<<endl;
    getline(cin,_contrasena);
    if (_contrasena != contrasena)
    {
        cout <<"La contraseña no es correcta"<<endl;
        return false;
    }
    else
    {
        return true;
    }

}

bool Propietario::contrasenaVacia() //verificar si hay o no una contrasena ingresada
{
    if (contrasena != "")
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool Propietario::accesoContrasenaPropietario()
{
    if (contrasenaVacia()) //si la contraseña es vacia
    {
        setContrasena(); //colocar una contrasena
        return true;
    }
    else 
    {
        return confirmeContrasena();
    }
}