#include <cstring> //para strcpy
//#include "ingredientes.cpp"
//controlGastos y controlGanancias nos ayudan a tener la lista de gastos y ganancias en orden
class Platillos
{
    //atributos
    public:
    std::string nombre[4];
    double precio[4];
    double cantidadPorIngrediente[4][10];

    //constructores
    Platillos();
	
    //Metodos
    void Preparar(Ingredientes &ingredientes);
    int getPrecio(int num);

};
