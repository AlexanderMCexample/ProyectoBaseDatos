class Ingredientes //Creaci�n de la clase ingredientes
{
    //atributos
    public:
    DatosIngresos datos;//evitar tener errores al ingresar datos 
    std::string nombre[10]; //lista de los nombres
    double precioKilo[10];  //lista de los precios x kilo
    double cantidadesTotal[10]; //lista de las cantidades almacenadas
    double dinero; //dinero 
    //constructor
    Ingredientes();
    ~Ingredientes();
    //metodos
    void imprimirAlmacen(); //Imprime el almacen
    void Tienda(RegistroVenta &o); //Accede a la tienda para comprar ingredientes
    void menu(RegistroVenta &o); //menu para acceder a los anteriores metodos
    void incrementarDinero(int _dinero); //Dinero
    
    double getcantidadesTotal(int num); //obtiene las cantidades almacenadas para ser usadas al preparar un platillo
    void setcantidadesTotal(int num,double num2); //ingresa la nueva cantidad almacenada luego de preparar un platillo
};
