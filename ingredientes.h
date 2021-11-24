#include <cstring> //para strcpy
#include <conio.h> //gets()
//controlGastos y controlGanancias nos ayudan a tener la lista de gastos y ganancias en orden
class Ingredientes
{
    //atributos
    public:
    std::string nombre[10];
    double precioKilo[10];
    double cantidadesTotal[10];
    double dinero;
    //constructores
    Ingredientes();
    void imprimirAlmacen(); //Compra un ingrediente
    void Tienda(); //Accede a la tienda para comprar ingredientes
    void menu(); //menu para acceder a los anteriores metodos
    void incrementarDinero(int _dinero);
    
    double getcantidadesTotal(int num);
    void setcantidadesTotal(int num,double num2);
};
