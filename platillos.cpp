#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases

#include "platillos.h" //clase Ingredientes 


using namespace std;    

void Platillos::Crear2()
{
  for (int i=0; i<2; i++)
  {
  	switch(i)
  	{
  	case 0:
  		strcpy(nombres[i],"Pizza de Pepperoni");
  		precios[i]=30;
  		cantidad_ingredientes[i]=4;
  		for (int j=0; j<cantidad_ingredientes[i]; j++)
  		{
  			switch(j)
  			{
  			case 0:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[1]); //tomate
  				//primero.get_nombre(Ingredientes_usar_nombre[j],j)
  				Ingredientes_usar_cantidad[i][j]=0.05;
  				break;
  			case 1:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[2]); //peperoni
  				Ingredientes_usar_cantidad[i][j]=0.1;
  				break;
  			case 2:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[3]);//masa
  				Ingredientes_usar_cantidad[i][j]=0.4;
  				break;
  			case 3:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[4]);//queso
  				Ingredientes_usar_cantidad[i][j]=0.25;
  				break;
  			default:
  				break;
  			}
		}
  		break;
  	case 1:
  		strcpy(nombres[i],"Pizza Americana");
  		precios[i]=35;
  		cantidad_ingredientes[i]=5;
  		for (int j=0; j<cantidad_ingredientes[i]; j++)
  		{
  			switch(j)
  			{
  			case 0:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[1]);
  				Ingredientes_usar_cantidad[i][j]=0.05;
  				break;
  			case 1:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[2]);
  				Ingredientes_usar_cantidad[i][j]=0.05;
  				break;
  			case 2:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[3]);
  				Ingredientes_usar_cantidad[i][j]=0.3;
  				break;
  			case 3:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[4]);
  				Ingredientes_usar_cantidad[i][j]=0.15;
  				break;
  			case 4:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[5]);//pina
  				Ingredientes_usar_cantidad[i][j]=0.02;
  				break;
  			default:
  				break;
  			}
		}
  		break;
  	default:
  		break;
	}
  }
}

void Platillos::Vender()
{
	for (int i=0; i<2; i++)
    {
  	cout<<i+1<<") "<<nombres[i]<<":           s/."<<precios[i]<<"\n";
    }
  	cout<< "0) Salir\n\n";
	int opcion;
    while(opcion!=0)
    {
	    cout << "Elija un platillo"<<endl;
	    cin >> opcion;
	    if (opcion<1 || opcion>2)
	    {
	    	cout<<"Elija una opcion valida";
		}
		else
		{
	    	switch(opcion)
			{
			case 1:
  				primero.cantidadesT[1]=primero.cantidadesT[1]-Ingredientes_usar_cantidad[opcion+1][0];
  				primero.cantidadesT[2]=primero.cantidadesT[2]-Ingredientes_usar_cantidad[opcion+1][1];
  				primero.cantidadesT[3]=primero.cantidadesT[3]-Ingredientes_usar_cantidad[opcion+1][2];
  				primero.cantidadesT[4]=primero.cantidadesT[4]-Ingredientes_usar_cantidad[opcion+1][3];
  				break;
  				
  			case 2:
  				primero.cantidadesT[1]=primero.cantidadesT[1]-Ingredientes_usar_cantidad[opcion+1][0];
  				primero.cantidadesT[2]=primero.cantidadesT[2]-Ingredientes_usar_cantidad[opcion+1][1];
  				primero.cantidadesT[3]=primero.cantidadesT[3]-Ingredientes_usar_cantidad[opcion+1][2];
  				primero.cantidadesT[4]=primero.cantidadesT[4]-Ingredientes_usar_cantidad[opcion+1][3];
  				primero.cantidadesT[5]=primero.cantidadesT[5]-Ingredientes_usar_cantidad[opcion+1][3];
  				break;
  			default:
  				break;
			}
		}
	}
}

void Platillos::Vender(double _compra[100], int &_control_gastos)
{
	int control_gastos=0;
	for (int i=0; i<2; i++)
    {
  	cout<<i+1<<") "<<nombres[i]<<":           s/."<<precios[i]<<"\n";
    }
  	cout<< "0) Salir\n\n";
	int opcion=1;
    while(opcion!=0)
    {
	    cout << "Elija un platillo"<<endl;
	    cin >> opcion;
	    if (opcion<0 || opcion>2)
	    {
	    	cout<<"Elija una opcion valida";
		}
		else
		{
	    	switch(opcion)
			{
			case 1:
  				primero.cantidadesT[1]=primero.cantidadesT[1]-Ingredientes_usar_cantidad[opcion+1][0];
  				primero.cantidadesT[2]=primero.cantidadesT[2]-Ingredientes_usar_cantidad[opcion+1][1];
  				primero.cantidadesT[3]=primero.cantidadesT[3]-Ingredientes_usar_cantidad[opcion+1][2];
  				primero.cantidadesT[4]=primero.cantidadesT[4]-Ingredientes_usar_cantidad[opcion+1][3];
  				_compra[control_gastos] = precios[0];
  				control_gastos++;
  				break;
  			case 2:
  				primero.cantidadesT[1]=primero.cantidadesT[1]-Ingredientes_usar_cantidad[opcion+1][0];
  				primero.cantidadesT[2]=primero.cantidadesT[2]-Ingredientes_usar_cantidad[opcion+1][1];
  				primero.cantidadesT[3]=primero.cantidadesT[3]-Ingredientes_usar_cantidad[opcion+1][2];
  				primero.cantidadesT[4]=primero.cantidadesT[4]-Ingredientes_usar_cantidad[opcion+1][3];
  				primero.cantidadesT[5]=primero.cantidadesT[5]-Ingredientes_usar_cantidad[opcion+1][3];
  				_compra[control_gastos] = precios[1];
  				control_gastos++;
  				break;
  			default:
  				break;
			}
		}
	}
	_control_gastos = control_gastos;
}

