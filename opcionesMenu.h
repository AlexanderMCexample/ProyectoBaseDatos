class OpcionesMenu
{
    public:
    Platillos platillos;
    Ingredientes ingredientes;
    Cliente cliente;
    Voucher_Clientes voucher;
    Propietario propietario;
    RegistroVenta registroVenta;

    OpcionesMenu();

    void dueno();
    void clientes();
    void menuOpciones();
};