class Platillos
{
    //atributos
    public:
    DatosIngresos datos;//evitar tener errores al ingresar datos 
    std::string nombre[4]; //lista de los nombres de los diferentes platillos
    double precio[4]; //lista de los precios
    double cantidadPorIngrediente[4][10]; //matriz de las cantidades que usan los platillos de cada ingredientes (4 platillos, 10 ingredientes)

    //constructor
    Platillos(); 
	
    //Metodos
    void Preparar(Ingredientes &ingredientes, RegistroVenta &tablas, Voucher_Clientes &voucher,Cliente &cliente ); //prepara un platillo y gasta ingredientes
    int getPrecio(int num); //devuelve el precio como ganancia... se usara proximamente :)

};
