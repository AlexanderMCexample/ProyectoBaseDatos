class Propietario {
    //atributos
    public:
    RegistroVenta registroVenta; //registros de ventas
    Datos_personales datosPropietario;    

    //constructores
    Propietario(int _dia = 0, double _capital = 0){
        registroVenta = RegistroVenta(_dia,_capital);
    }
    
    //Metodos
    void setDatosPropietario();
    void imprimirTabla();
    void imprimirAlmacen();
    void ganancias();
    void gastos();

};