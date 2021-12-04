#include "ingresoDatos.h" 
using namespace std; 


DatosIngresos::DatosIngresos(){}
DatosIngresos::~DatosIngresos(){}

void DatosIngresos::ingresoNumero(int &a)
{
  bool error=false;
  do
  {
    cin >> a;
    error = cin.fail(); //retorna true si hay un error
    if (error) //si se captura un error
    {
      cout <<"  ingreso no confirmado. Vuelve a intentar: \n";
      cin.clear(); //limpia el registro cin
      cin.ignore(100,'\n'); //elimina el último endl para el siguiente ingreso
    }
  } while (error);
}

void DatosIngresos::ingresoNumero(double &a)
{
  bool error=false;
  do
  {
    cin >> a;
    error = cin.fail();
    if (error)
    {
      cout <<"  ingreso no confirmado. Vuelve a intentar:\n";
      cin.clear();
      cin.ignore(100,'\n');
    }
  } while (error);
}

void DatosIngresos::variables_rango(int &n, int mayor, int menor)  //función para ingresar una variable según su rango
{
    cout << "\n  Ingrese el valor entre " << menor  << " y "<< mayor<<": ";
    ingresoNumero(n);
    while(true) //verifica si el ingreso de la variable es correcto
    {
        if (n<menor) 
        {
            cout << "\n  ingrese un valor mayor igual a " << menor<< ": ";
            ingresoNumero(n);
        }
        else if (n>mayor) 
        { 
            cout << "\n  ingrese un valor menor igual a " << mayor<< ": ";
            ingresoNumero(n);
        }
        else 
        {
            break;
        }    
    }
    cout << "\n";
    return;
}