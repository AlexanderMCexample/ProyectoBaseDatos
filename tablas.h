#include <cstring> //para strcpy
#include <conio.h> //gets()
//controlGastos y controlGanancias nos ayudan a tener la lista de gastos y ganancias en orden
class Tablas {
    //atributos
    public:
    double gastos[100], ganancias[100], capital; // valores para las tablas
    int dia,controlGastos,controlGanancias;
    char nombreGastos[100][20], nombreGanancias[100][20]; //cada nombre contiene 20 palabras

    //constructores
    Tablas(int _dia = 0, double _capital = 0){ //contructor del los valroes y para inicializar las listas
        dia = _dia;
        capital = _capital;
        controlGanancias = 0;
        controlGastos = 0;
        for(int i=0;i<100;i++){
            gastos[i]=0;
            ganancias[i]=0;
            strcpy(nombreGanancias[i],"");
            strcpy(nombreGastos[i],"");
        }
    }

    //Metodos
    void setGanacia(); //ingresar una ganancia
    void setGasto(); //ingresar un gasto

    void getGanacia(int _getGanancia, double &_ganancia, char _nombreGanancia[20]); //obtener una ganancia de la lista
    void getGasto(int _getGasto, double &_gasto, char _nombreGasto[20]); //obtener un gasto de la lista

    void deleteGasto(); //eliminar un gasto
    void deleteGanancia(); //eliminar una ganancia

    double totalGanancias(); //retorna el total de ganancia
    double totalGastos(); //retorna el total de gastos

    void imprimirGanacias(); //obtener la lista y total de ganancias
    void imprimirGastos(); //obtener la lista y total de gastos
    void imprimirTabla(); //imprime la tabla dia, capital, ganacia, gasto
    void menu(); //menu para acceder a los anteriores metodos


};