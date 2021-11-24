#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases

#include "ingredientes.h" //clase Ingredientes 



using namespace std;    

Ingredientes::Ingredientes(double dinero = 0):
	this -> dinero(dinero),
	{
		for (int i=0; i<10,i++)
        {
        	switch(i)
        	{
        	case 0:
				strcpy(nombre[i],"Ajo                ");
				precioKilo[i]=10;
				cantidadesTotal[i]=10;
				break;
			case 1:
				strcpy(nombre[i],"Salsa de tomate    ");
				precioKilo[i]=25;
				cantidadesTotal[i]=10;
				break;
			case 2:
				strcpy(nombre[i],"Pepperoni          ");
				precioKilo[i]=65;
				cantidadesTotal[i]=10;
				break;
			case 3:
				strcpy(nombre[i],"Masa               ");
				precioKilo[i]=30;
				cantidadesTotal[i]=10;
				break;
			case 4:
				strcpy(nombre[i],"Queso              ");
				precioKilo[i]=30;
				cantidadesTotal[i]=10;
				break;
			case 5:
				strcpy(nombre[i],"Pina                ");
				precioKilo[i]=10;
				cantidadesTotal[i]=10;
				break;
			case 6:
				strcpy(nombre[i],"Champinon           ");
				precioKilo[i]=30;
				cantidadesTotal[i]=10;
				break;
			case 7:
				strcpy(nombre[i],"Aceituna            ");
				precioKilo[i]=25;
				cantidadesTotal[i]=10;
				break;
			case 8:
				strcpy(nombre[i],"Oregano             ");
				precioKilo[i]=50;
				cantidadesTotal[i]=10;
				break;
			case 9:
				strcpy(nombre[i],"Aceite de oliva     ");
				precioKilo[i]=15;
				cantidadesTotal[i]=10;
				break;
			default:
				break;
			}
		}
	}
void Ingredientes::imprimirAlmacen()
{
  for (int i=0; i<8; i++)
  {
  	cout<<nombre[i]<<":        "<<cantidadesTotal[i]<<"kg"<<"\n";
  }
}

void Ingredientes::Tienda(Tablas &o)
{
  	int opcion;
  	int opcion2;
  	for (int i=0; i<8; i++)
  	{
  	cout<<i+1<<") "<<nombre[i]<<":        s/."<<precios[i]<<"\n";
  	}
  	cout << "0) Salir\n\n";
    while(opcion!=0)
    {
	    cout << "Elija un ingrediente a comprar                  s/."<<dinero<<endl;
	    cin >> opcion;
	    if (opcion<0 || opcion>8)
	    {
	    	cout<<"Elija una opcion valida";
		}
		else
		{
			while(opcion2>0)
		    {
		    	cout << "Ingrese cantidad a comprar (kg)"<<endl;
			    cin >> opcion2;
			    if (opcion2>dinero)
			    {
			    	cout<<"Elija una opcion valida";
				}
				else
				{
			    	cantidadesTotal[opcion-1]=cantidadesTotal[opcion-1]+opcion2; //colocar una ganancia
			    	dinero=dinero-(precio[opcion-1]*opcion2);
			    	o.setGasto(nombre[opcion-1],precio[opcion-1]);
				}
			}
		}
	}
}
void Ingredientes::menu()
{
  int opcion=0;
  do{
    cout << "Seleccione una opcion"<<endl;
    cout << "1) Mostrar almacen" << endl;
    cout << "2) Entrar a la tienda" << endl;
    cout << "0) Salir\n\n";
    cin >> opcion;
    
    switch (opcion)
    {
    case 1:
      imprimirAlmacen(); //colocar una ganancia
      break;
    case 2:
      Tienda(); //colocar un gasto
      break;
    default: 
      break;
    }
  }while(opcion!=0);
}

void Ingredientes::incrementarDinero(int _dinero){
	dinero += _dinero;
}
double getCantidadadesTotal(int num)
{
	return cantidadesTotal[num];
}

