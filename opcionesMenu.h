class OpcionesMenu
{
    public:
    Platillos platillos;
    Ingredientes *ingredientes;
    Cliente *cliente;
    Voucher_Clientes *voucher;
    Propietario *propietario;
    RegistroVenta *registroVenta;
    int numeroCliente;
    int numeroPropietarios;
    int indexPropietario;
    int indexCliente;


    OpcionesMenu(int _nClientes, int _nPropietarios);
    ~OpcionesMenu();

    void escogerPropietario();
    void escogerCliente();
    void dueno();
    void clientes();
    void menuOpciones();
    void variables_rango(int &n, int mayor, int menor);
};