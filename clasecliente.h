#include <cstring> //para strcpy
#include <conio.h> //gets()

class Cliente:public Datos_personales {
    //Atributos
    public:
    int numeroCompras;
    //Constructor
    Cliente(std::string, std::string, std::string, int, int);
    
    ~Cliente();
    //Metodos

    void setNumeroCompras(int);
    int getNumeroCompras();
    void incrementarNumeroCompras(int);
    void imprimirNumeroCompras();
};