#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> 
#include <String.h> 
#include "ingredientes.h"

using namespace std;    

void Ingredientes::Crear()
{
  for (int i=0; i<8; i++)
  {
  	switch(i)
  	{
  	case 0:
  		strcpy(nombres[i],"Cebolla   ");
  		precios[i]=15;
  		cantidadesT[i]=100;
  		cantidadesV[i]=5;
  		break;
  	case 1:
  		strcpy(nombres[i],"Tomate    ");
  		precios[i]=30;
  		cantidadesT[i]=100;
  		cantidadesV[i]=5;
  		break;
  	case 2:
  		strcpy(nombres[i],"Pepperoni ");
  		precios[i]=100;
  		cantidadesT[i]=100;
  		cantidadesV[i]=1;
  		break;
  	case 3:
  		strcpy(nombres[i],"Masa     ");
  		precios[i]=60;
  		cantidadesT[i]=100;
  		cantidadesV[i]=20;
  		break;
  	case 4:
  		strcpy(nombres[i],"Queso    ");
  		precios[i]=140;
  		cantidadesT[i]=100;
  		cantidadesV[i]=5;
  		break;
  	case 5:
  		strcpy(nombres[i],"Pi�a     ");
  		precios[i]=10;
  		cantidadesT[i]=100;
  		cantidadesV[i]=2;
  		break;
  	case 6:
  		strcpy(nombres[i],"Champinon");
  		precios[i]=260;
  		cantidadesT[i]=100;
  		cantidadesV[i]=10;
  		break;
  	case 7:
  		strcpy(nombres[i],"Aceituna");
  		precios[i]=35;
  		cantidadesT[i]=100;
  		cantidadesV[i]=5;
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
  	cout<<nombres[i]<<":        "<<cantidadesT[i]<<"kg"<<"\n";
  }
}

void Ingredientes::Tienda()
{
  for (int i=0; i<8; i++)
  {
  	cout<<i+1<<") "<<nombres[i]<<":        "<<cantidadesV[i]<<"kg      s/."<<precios[i]<<"\n";
  }
  cout << "0) Salir\n\n";
  Comprar();
}
void Ingredientes::Comprar()
{
	int opcion;
    while(opcion!=0)
    {
	    cout << "Elija un ingrediente a comprar                  s/."<<dinero<<endl;
	    cin >> opcion;
	    if (opcion<1 || opcion>8)
	    {
	    	cout<<"Elija una opcion valida";
		}
		else
		{
	    cantidadesT[opcion-1]=cantidadesT[opcion-1]+cantidadesV[opcion-1]; //colocar una ganancia
	    dinero=dinero-precios[opcion-1];
		}
	}
}

void Ingredientes::Usar()
{
	for (int i=0; i<8; i++)
  	{
  	cout<<i+1<<") "<<nombres[i]<<":        "<<cantidadesT[i]<<"kg"<<"\n";
 	}
 	cout << "0) Salir\n\n";
	int opcion=1, opcion2=1;
    while(opcion!=0)
    {
	    cout << "Elija un ingrediente a usar"<<endl;
	    cin >> opcion;
	    if(opcion==0)
		{
			break;
		}
	    else if (opcion<1 || opcion>8)
	    {
	    	cout<<"Elija una opcion valida";
		}
		else
		{
		    cout<<"Elija la cantidad que quiere usar"<<"\n";
		    cin >> opcion2;
		    if (opcion2<cantidadesT[opcion-1])
		    {
		    	cantidadesT[opcion-1]=cantidadesT[opcion-1]-opcion2;
			}
			else
			{
				cout<<"No hay suficientes ingredientes";
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
    cout << "3) Usar un ingrediente" << endl;
    cout << "0) Salir\n\n";
    cin >> opcion;
    
    switch (opcion)
    {
    case 1:
      imprimirAlmacen(); //colocar una ganancia
      break;
    case 2:
      Tienda(); //colocar un gasto
	  Comprar();
      break;
    case 3:
      Usar(); //colocar un gasto
      break;
    default: 
      break;
    }
  }while(opcion!=0);
}
//===========================================================================
//===========================================================================
