#include <cstring> //para strcpy
#include <conio.h> //gets()
//controlGastos y controlGanancias nos ayudan a tener la lista de gastos y ganancias en orden
class Ingredientes
{
    //atributos
    public:
    
    char nombreMuestra[100];
    char nombres[100][20];
	double precios[100], cantidadesT[100], cantidadesV[100];
	int dinero;
	
    

    //constructores
    Ingredientes(int _dinero)
	{ //contructor del los valroes y para inicializar las listas
        dinero = _dinero;
        for(int i=0;i<100;i++)
		{
        	precios[i]=0;
        	cantidadesT[i]=0;
        	cantidadesV[i]=0;
        	strcpy(nombres[i],"");
        }
    }
    Ingredientes(){ //constructo por defecto para crear las listas de los objetos de la clase
    }

    //Metodos
    void Crear();
    void Comprar(); //Compra un ingrediente
    void Usar(); //Usa un ingrediente

	void Tienda();
    void imprimirAlmacen(); //imprime la tabla dia, capital, ganacia, gasto
    void menu(); //menu para acceder a los anteriores metodos


};
