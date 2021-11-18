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
  		strcpy(nombres[i],"Pizza de Pepperoni   ");
  		precios[i]=30;
  		cantidad_ingredientes[i]=4;
  		for (int j=0; i<cantidad_ingredientes[i]; i++)
  		{
  			switch(j)
  			{
  			case 0:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[1]); //tomate
  				//primero.get_nombre(Ingredientes_usar_nombre[j],j)
  				Ingredientes_usar_cantidad[i][j]=0.05;
  			case 1:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[2]); //peperoni
  				Ingredientes_usar_cantidad[i][j]=0.1;
  			case 2:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[3]);//masa
  				Ingredientes_usar_cantidad[i][j]=0.4;
  			case 3:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[4]);//queso
  				Ingredientes_usar_cantidad[i][j]=0.25;
  			default:
  				break;
  			}
		}
  		break;
  	case 1:
  		strcpy(nombres[i],"Pizza Americana   ");
  		precios[i]=35;
  		cantidad_ingredientes[i]=5;
  		for (int j=0; i<cantidad_ingredientes[i]; i++)
  		{
  			switch(j)
  			{
  			case 0:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[1]);
  				Ingredientes_usar_cantidad[i][j]=0.05;
  			case 1:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[2]);
  				Ingredientes_usar_cantidad[i][j]=0.05;
  			case 2:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[3]);
  				Ingredientes_usar_cantidad[i][j]=0.3;
  			case 3:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[4]);
  				Ingredientes_usar_cantidad[i][j]=0.15;
  			case 4:
  				strcpy(Ingredientes_usar_nombre[j],primero.nombres[5]);//pina
  				Ingredientes_usar_cantidad[i][j]=0.02;
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

void Platillos::Menu_compra()
{
  for (int i=0; i<2; i++)
  {
  	cout<<i+1<<") "<<nombres[i]<<":           s/."<<precios[i]<<"\n";
  }
  cout<< "0) Salir\n\n";
  Vender();
}

void Platillos::Vender()
{
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
  			case 2:
  				primero.cantidadesT[1]=primero.cantidadesT[1]-Ingredientes_usar_cantidad[opcion+1][0];
  				primero.cantidadesT[2]=primero.cantidadesT[2]-Ingredientes_usar_cantidad[opcion+1][1];
  				primero.cantidadesT[3]=primero.cantidadesT[3]-Ingredientes_usar_cantidad[opcion+1][2];
  				primero.cantidadesT[4]=primero.cantidadesT[4]-Ingredientes_usar_cantidad[opcion+1][3];
  				primero.cantidadesT[5]=primero.cantidadesT[5]-Ingredientes_usar_cantidad[opcion+1][3];
  			default:
  				break;
			}
		}
	}
}


