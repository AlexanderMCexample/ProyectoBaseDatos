#include "ingredientes.h" //clase Ingredientes 
using namespace std;    

Ingredientes::Ingredientes(): //constructor
	dinero(0) //QUE HACES AQUI FRED
	{
		for (int i=0; i<10;i++)
        {
        	switch(i) //creacion de las listas que almacenan los nombres, precios, cantidades
        	{
        	case 0:
				nombre[i]="Ajo                ";
				precioKilo[i]=10;
				cantidadesTotal[i]=10;
				break;
			case 1:
				nombre[i]="Salsa de tomate    ";
				precioKilo[i]=25;
				cantidadesTotal[i]=10;
				break;
			case 2:
				nombre[i]="Pepperoni          ";
				precioKilo[i]=65;
				cantidadesTotal[i]=10;
				break;
			case 3:
				nombre[i]="Masa               ";
				precioKilo[i]=30;
				cantidadesTotal[i]=10;
				break;
			case 4:
				nombre[i]="Queso              ";
				precioKilo[i]=30;
				cantidadesTotal[i]=10;
				break;
			case 5:
				nombre[i]="Pina                ";
				precioKilo[i]=10;
				cantidadesTotal[i]=10;
				break;
			case 6:
				nombre[i]="Champinon           ";
				precioKilo[i]=30;
				cantidadesTotal[i]=10;
				break;
			case 7:
				nombre[i]="Aceituna            ";
				precioKilo[i]=25;
				cantidadesTotal[i]=10;
				break;
			case 8:
				nombre[i]="Oregano             ";
				precioKilo[i]=50;
				cantidadesTotal[i]=10;
				break;
			case 9:
				nombre[i]="Aceite de oliva     ";
				precioKilo[i]=15;
				cantidadesTotal[i]=10;
				break;
			default:
				break;
			}
		}
	}
Ingredientes::~Ingredientes()
{
  for(int i=0;i<=8;i++)
  {
	nombre[i]="";
	precioKilo[i]=0;
	cantidadesTotal[i]=0;
  }
  dinero=0;
}
void Ingredientes::imprimirAlmacen() //funcion de imprimir almacen
{
  for (int i=0; i<8; i++)
  {
  	cout<<nombre[i]<<":        "<<cantidadesTotal[i]<<"kg"<<"\n";
  }
}

void Ingredientes::Tienda(RegistroVenta &o) //funcion para imprimir la tienda para realizar la compra de ingredientes
{
  	int opcion=0;
  	int opcion2=0;
	dinero = o.getCapital();
  	for (int i=0; i<8; i++)
  	{
  	cout<<i+1<<") "<<nombre[i]<<":        s/."<<precioKilo[i]<<"\n";
  	}
  	cout << "0) Salir\n\n";
    do
    {
	    cout << "Elija un ingrediente a comprar                  s/."<<dinero<<endl;
		datos.ingresoNumero(opcion);
	    if (opcion<0 || opcion>8)
	    {
	    	cout<<"Elija una opcion valida\n";
		}
		else if (opcion!=0)
		{
			do
		    {
		    	cout << "Ingrese cantidad a comprar (kg)"<<endl;
				datos.variables_rango(opcion2,100,0);
				if(opcion2==0)
				{
					
				}
			    else if (opcion2*precioKilo[opcion-1]>dinero)
			    {
			    	cout<<"No tiene suficiente dinero \n";
				}
				else
				{
			    	cantidadesTotal[opcion-1]=cantidadesTotal[opcion-1]+opcion2; //colocar una ganancia
			    	dinero=dinero-(precioKilo[opcion-1]*opcion2);
			    	o.setGasto(nombre[opcion-1],precioKilo[opcion-1]*opcion2);
					o.incrementarNumeroGastos(1);
				}
				opcion2=0;
			}while(opcion2!=0);
		}
	}while(opcion!=0);
	o.setCapital(dinero);
}

void Ingredientes::menu(RegistroVenta &o) //menu para decidir si imprimir almacen o comprar mas ingredientes
{
  int opcion=0;
  do{
    cout << "Seleccione una opcion"<<endl;
    cout << "1) Mostrar almacen" << endl;
    cout << "2) Entrar a la tienda" << endl;
    cout << "0) Salir\n\n";
    datos.ingresoNumero(opcion);

    switch (opcion)
    {
    case 1:
      imprimirAlmacen(); //colocar una ganancia
      break;
    case 2:
      //Tienda(o); //colocar un gasto
      break;
    default: 
      break;
    }
  }while(opcion!=0);
}

void Ingredientes::incrementarDinero(int _dinero){ // uwu
	dinero += _dinero;
}
double Ingredientes::getcantidadesTotal(int num) //obtiene la cantidades totales
{
	return cantidadesTotal[num];
}
void Ingredientes::setcantidadesTotal(int num,double num2) //ingresa cantidades totales
{
	cantidadesTotal[num]=num2;
}
