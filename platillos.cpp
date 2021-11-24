#include <iostream>
#include <math.h> //para formulas matemáticas
#include <conio.h> //gets()
#include <cstring> //strcpy strcmp
#include <String.h> //string 
//clases

#include "platillos.h" //clase Ingredientes 


using namespace std;   
Platillos::Platillos(){
	for (int i=0; i<4;i++)
        {
        	switch(i)
        	{
        	case 0:
				nombre[i]="Pizza 4 Quesos      ";
				precio[i]=30;
				break;
			case 1:
				nombre[i]="Pizza Napolitana    ";
				precio[i]=35;
				break;
			case 2:
				nombre[i]="Pizza de Pepperoni  ";
				precio[i]=30;
				break;
			case 3:
				nombre[i]="Pizza Hawaiana      ";
				precio[i]=40;
				break;
			default:
				break;
		}
        for (int row = 0; row < 4; row++)
        {
            for (int col = 0; col < 10; col++)
            {
                switch(row)
	        	{
	        	case 0: //4 QUESOS
					switch(col)
		        	{
		        	case 0: //ajo
						cantidadPorIngrediente[row][col]=0.004;
						break;
					case 1: // salsa de tomate
						cantidadPorIngrediente[row][col]=0.150;
						break;
					case 2: // peperoni
						cantidadPorIngrediente[row][col]=0.000;
						break;
					case 3: // masa
						cantidadPorIngrediente[row][col]=0.400;
						break;
					case 4: // queso
						cantidadPorIngrediente[row][col]=0.550;
						break;
					case 5: // pina
						cantidadPorIngrediente[row][col]=0.000;
						break;
					case 6: //champinon
						cantidadPorIngrediente[row][col]=0.000;
						break;
					case 7: // aceituna
						cantidadPorIngrediente[row][col]=0.000;
						break;
					case 8: // oregnao
						cantidadPorIngrediente[row][col]=0.003;
						break;
					case 9: // aceite de olva
						cantidadPorIngrediente[row][col]=0.015;
						break;
					default:
						break;
					break;
					}
				case 1: // NAPOLITANA
					switch(col)
		        	{
		        	case 0: //ajo
						cantidadPorIngrediente[row][col]=0.001;
						break;
					case 1: // salsa de tomate
						cantidadPorIngrediente[row][col]=0.125;
						break;
					case 2: // peperoni
						cantidadPorIngrediente[row][col]=0.000;
						break;
					case 3: // masa
						cantidadPorIngrediente[row][col]=0.400;
						break;
					case 4: // queso
						cantidadPorIngrediente[row][col]=0.250;
						break;
					case 5: // pina
						cantidadPorIngrediente[row][col]=0.000;
						break;
					case 6: //champinon
						cantidadPorIngrediente[row][col]=0.000;
						break;
					case 7: // aceituna
						cantidadPorIngrediente[row][col]=0.010;
						break;
					case 8: // oregnao
						cantidadPorIngrediente[row][col]=0.000;
						break;
					case 9: // aceite de olva
						cantidadPorIngrediente[row][col]=0.020;
						break;
					default:
						break;
					break;
					}
				case 2: // PEPERONI
					switch(col)
		        	{
		        	case 0: //ajo
						cantidadPorIngrediente[row][col]=0.001;
						break;
					case 1: // salsa de tomate
						cantidadPorIngrediente[row][col]=0.085;
						break;
					case 2: // peperoni
						cantidadPorIngrediente[row][col]=0.040;
						break;
					case 3: // masa
						cantidadPorIngrediente[row][col]=0.400;
						break;
					case 4: // queso
						cantidadPorIngrediente[row][col]=0.500;
						break;
					case 5: // pina
						cantidadPorIngrediente[row][col]=0.000;
						break;
					case 6: //champinon
						cantidadPorIngrediente[row][col]=0.000;
						break;
					case 7: // aceituna
						cantidadPorIngrediente[row][col]=0.002;
						break;
					case 8: // oregnao
						cantidadPorIngrediente[row][col]=0.007;
						break;
					case 9: // aceite de olva
						cantidadPorIngrediente[row][col]=0.001;
						break;
					default:
						break;
					break;
					}
				case 3: //HAWAIANA
					switch(col)
		        	{
		        	case 0: //ajo
						cantidadPorIngrediente[row][col]=0.004;
						break;
					case 1: // salsa de tomate
						cantidadPorIngrediente[row][col]=0.000;
						break;
					case 2: // peperoni
						cantidadPorIngrediente[row][col]=0.020;
						break;
					case 3: // masa
						cantidadPorIngrediente[row][col]=0.400;
						break;
					case 4: // queso
						cantidadPorIngrediente[row][col]=0.400;
						break;
					case 5: // pina
						cantidadPorIngrediente[row][col]=0.375;
						break;
					case 6: //champinon
						cantidadPorIngrediente[row][col]=0.000;
						break;
					case 7: // aceituna
						cantidadPorIngrediente[row][col]=0.000;
						break;
					case 8: // oregnao
						cantidadPorIngrediente[row][col]=0.005;
						break;
					case 9: // aceite de olva
						cantidadPorIngrediente[row][col]=0.125;
						break;
					default:
						break;
					break;
					}
				default:
					break;
				}
            }
        }
    }
	
} 
void Platillos::Preparar(Ingredientes &ingredientes)
{
	//ingredientes.getcantidadesTotal()
  	int opcion;
  	for (int i=0; i<3; i++)
  	{
  	cout<<i+1<<") "<<nombre[i]<<":        s/."<<precio[i]<<"\n";
  	}
  	cout << "0) Salir\n\n";
    while(opcion!=0)
    {
	    cout << "Realize su orden"<<endl;
	    cin >> opcion;
	    if (opcion<0 || opcion>3)
	    {
	    	cout<<"Elija una opcion valida";
		}
		else
		{
			switch(opcion)
			{
			case 0:
				for (int i=0; i<10;i++)
				{
					ingredientes.setcantidadesTotal(i,ingredientes.getcantidadesTotal(i) - cantidadPorIngrediente[opcion][i]);
				}
				break;
			case 1:
				for (int i=0; i<10;i++)
				{
					ingredientes.setcantidadesTotal(i,ingredientes.getcantidadesTotal(i) - cantidadPorIngrediente[opcion][i]);
				}
				break;
			case 2:
				for (int i=0; i<10;i++)
				{
					ingredientes.setcantidadesTotal(i,ingredientes.getcantidadesTotal(i) - cantidadPorIngrediente[opcion][i]);
				}
				break;
			case 3:
				for (int i=0; i<10;i++)
				{
					ingredientes.setcantidadesTotal(i,ingredientes.getcantidadesTotal(i) - cantidadPorIngrediente[opcion][i]);
				}
				break;
			}
		}
	}
}
int Platillos::getPrecio(int num)
{
	return precio[num];
}

