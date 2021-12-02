#include "platillos.h" //clase Ingredientes 


using namespace std;   
Platillos::Platillos(){ //constructor
	for (int i=0; i<4;i++)
    {
        switch(i) //for que crea los nombres
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
        for (int row = 0; row < 4; row++) //for que crea los ingredientes que usa cada platillo (MUY LARGO)
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
void Platillos::Preparar(Ingredientes &ingredientes, Tablas &tablas, Voucher_Clientes &voucher ) //prepara los platillos gastando ingredientes
{
  	int opcion=0;
  	for (int i=0; i<4; i++)
  	{
  		cout<<i+1<<") "<<nombre[i]<<":        s/."<<precio[i]<<"\n";
  	}
  	cout << "0) Salir\n\n";
    do
    {
	    cout << "Realize su orden"<<endl;
		datos.ingresoNumero(opcion);
	    if (opcion<-1 || opcion>4)
	    {
	    	cout<<"Elija una opcion valida\n";
		}
		else
		{
			opcion--;
			switch(opcion)
			{
			case 0:
				for (int i=0; i<10;i++)
				{
					ingredientes.setcantidadesTotal(i,ingredientes.getcantidadesTotal(i) - cantidadPorIngrediente[opcion][i]);
				}
				tablas.setGanancia(nombre[opcion],precio[opcion]);
				voucher.guardarCompra(nombre[opcion],precio[opcion]);
				tablas.incrementarCapital(precio[opcion]);
				break;
			case 1:
				for (int i=0; i<10;i++)
				{
					ingredientes.setcantidadesTotal(i,ingredientes.getcantidadesTotal(i) - cantidadPorIngrediente[opcion][i]);					
				}
				tablas.setGanancia(nombre[opcion],precio[opcion]);
				voucher.guardarCompra(nombre[opcion],precio[opcion]);
				tablas.incrementarCapital(precio[opcion]);
				break;
			case 2:
				for (int i=0; i<10;i++)
				{
					ingredientes.setcantidadesTotal(i,ingredientes.getcantidadesTotal(i) - cantidadPorIngrediente[opcion][i]);
				}
				tablas.setGanancia(nombre[opcion],precio[opcion]);
				voucher.guardarCompra(nombre[opcion],precio[opcion]);
				tablas.incrementarCapital(precio[opcion]);
				break;
			case 3:
				for (int i=0; i<10;i++)
				{
					ingredientes.setcantidadesTotal(i,ingredientes.getcantidadesTotal(i) - cantidadPorIngrediente[opcion][i]);
				}
				tablas.setGanancia(nombre[opcion],precio[opcion]);
				voucher.guardarCompra(nombre[opcion],precio[opcion]);
				tablas.incrementarCapital(precio[opcion]);
				break;
			}
		}
	}while(opcion!=-1);
}
int Platillos::getPrecio(int num) // devuelve el precio para que en los voucher aparezcan como ganancia si es due�o, gasto si es cliente
{
	return precio[num];
}

