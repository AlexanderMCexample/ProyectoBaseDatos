//vaucher de ganancias día

class RegistroVenta: public Tablas{
    //atributos
    public:
    int numeroVentas,numeroGastos;

    //constructores
    RegistroVenta(int _dia, double _capital);
   
    ~RegistroVenta();
   

    //Metodos
    void setNumeroVentas(int _numeroVentas);
    void setNumeroGastos(int _numeroGastos);
    int getNumeroVentas();
    int getNumeroGastos();
    void incrementarNumeroVentas(int incremento);
    void incrementarNumeroGastos(int incremento);
    void imprimirNumeroComprasVentas();

};