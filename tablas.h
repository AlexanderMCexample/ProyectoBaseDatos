#include <cstring> //para strcpy
#include <conio.h> //gets()
//controlGastos y controlGanancias nos ayudan a tener la lista de gastos y ganancias en orden
class Tablas {
    //atributos
    public:
    double gastos[100], ganancias[100], capital; // valores para las tablas
    int dia,controlGastos,controlGanancias;
    std::string nombreGastos[100], nombreGanancias[100];

    //constructores
    Tablas(int _dia = 0, double _capital = 0); //contructor del los valroes y para inicializar las listas

    //Metodos
    void setGanancia();
    void setGanancia(double &_ganancia); //ingresar una ganancia
    void setGasto(); //ingresar un gasto
    void setGasto(std::string _nombreGasto, double _gasto);

    void getGanacia(int _getGanancia, double &_ganancia, std::string &_nombreGanancia); //obtener una ganancia de la lista
    void getGasto(int _getGasto, double &_gasto, std::string &_nombreGasto); //obtener un gasto de la lista

    void deleteGasto(); //eliminar un gasto
    void deleteGanancia(); //eliminar una ganancia

    double totalGanancias(); //retorna el total de ganancia
    double totalGastos(); //retorna el total de gastos

    void imprimirGanacias(); //obtener la lista y total de ganancias
    void imprimirGastos(); //obtener la lista y total de gastos
    void imprimirTabla(); //imprime la tabla dia, capital, ganacia, gasto
    void menu(); //menu para acceder a los anteriores metodos

};
