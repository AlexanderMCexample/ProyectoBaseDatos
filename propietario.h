#include <cstring> //para strcpy
#include <conio.h> //gets()

class Propietario {
    //atributos
    public:
    VoucherGanancia voucherGanancia;
    Datos_personales datosPropietario;
    

    //constructores
    Propietario(int _dia = 0, double _capital = 0){
        voucherGanancia = VoucherGanancia(_dia,_capital);
    }


    //Metodos


};