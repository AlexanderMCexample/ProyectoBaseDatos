#include <cstring> //para strcpy
#include <conio.h> //gets()
#include "tablas.cpp"
#include "ingredientes.cpp"
//vaucher de ganancias semana
class VoucherGanancia {
    //atributos
    public:
    Tablas tab;
    Ingredientes ing;


    //constructores
    VoucherGanancia(int _dia = 0, double _capital = 0){ 
        tab = Tablas(_dia,_capital);
        ing = Ingredientes(_capital);
    }


    //Metodos
    void tabla();
    void imprimirVoucher();

};