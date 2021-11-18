#include <cstring> //para strcpy
#include <conio.h> //gets()
//#include "ingredientes.cpp"
//controlGastos y controlGanancias nos ayudan a tener la lista de gastos y ganancias en orden
class Platillos
{
    //atributos
    public:
    
    char nombres[100][20], Ingredientes_usar_nombre[100][20];
	double precios[100], Ingredientes_usar_cantidad[50][50], cantidad_ingredientes[100];
	Ingredientes primero;
	
    

    //constructores
    Platillos()
	{ //contructor del los valroes y para inicializar las listas
        for(int i=0;i<50;i++)
		{
        	precios[i]=0;
	       	cantidad_ingredientes[i]=0;
        	strcpy(nombres[i],"");
        	strcpy(Ingredientes_usar_nombre[i],"");
        	for (int j=0;j<50;j++)
        	{
        		Ingredientes_usar_cantidad[i][j]=0;
			}
        }
        primero = Ingredientes(500);
    }


    //Metodos
    void Crear2();
    void Vender(); 
    void Vender(double _compra[100], int &_control_gastos);
    


};
