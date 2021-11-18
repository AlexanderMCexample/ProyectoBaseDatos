#include <cstring> //para strcpy
#include <conio.h> //gets()

//vaucher de ganancias día

class VoucherGanancia {
    //atributos
    public:
    Tablas tab;
    Ingredientes ing;


    //constructores
    VoucherGanancia(int _dia = 0, double _capital = 0){ 
        tab = Tablas(_dia,_capital);
        ing = Ingredientes(_capital);
        ing.Crear();
    }


    //Metodos
    void gasto();
    
    void ganancia();

    void imprimirVoucher();

};