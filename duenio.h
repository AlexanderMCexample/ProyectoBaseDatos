class Propietario {
    //atributos
    public:
    VoucherGanancia voucher;
    Datos_personales datosPropietario;    

    //constructores
    Propietario(int _dia = 0, double _capital = 0){
        voucher = VoucherGanancia(_dia,_capital);
    }
    
    //Metodos
    void setDatosPropietario();
    void imprimirTabla();
    void imprimirAlmacen();
    void ganancias();
    void gastos();

};