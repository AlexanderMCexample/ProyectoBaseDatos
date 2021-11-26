#include "opcionesMenu.h"

OpcionesMenu::OpcionesMenu(int _nClientes=0, int _nPropietarios=0):
numeroCliente(_nClientes),numeroPropietarios(_nPropietarios),indexCliente(0),indexPropietario(0)
{
  if (numeroCliente >0)
  {
  cliente = new Cliente[numeroCliente];
  voucher = new Voucher_Clientes[numeroCliente];
  }
  else
  {
      cliente = nullptr;
      voucher = nullptr;
  }
  if (numeroPropietarios >0)
  {
    ingredientes= new Ingredientes[numeroPropietarios];
    propietario= new Propietario[numeroPropietarios];
    registroVenta = new RegistroVenta[numeroPropietarios];
  }
  else
  {
      ingredientes = nullptr;
      propietario = nullptr;
      registroVenta = nullptr;
  }
}
OpcionesMenu::~OpcionesMenu()
{
  if (numeroCliente >0 || cliente != nullptr)
  {
    delete[] cliente;
    delete[] voucher;
  }

  if (numeroPropietarios >0 || ingredientes != nullptr)
  {
    delete[] ingredientes;
    delete[] propietario;
    delete[] registroVenta;
  }

  numeroCliente=0;
  numeroPropietarios=0;
  indexCliente=0;
  indexPropietario=0;
}

void OpcionesMenu::dueno()
{
  int opcion=0;
  do
  {
    cout << "\n\n======Dueño======\n\n";
    cout << "A que modo deseea entrar: \n";
    cout<<" 1) Colocar Datos personales\n";
    cout<<" 2) Ingresar al Registro de ventas\n";
    cout<<" 3) Imprimir Almacen\n";
    cout<<" 4) Imprimir Registro de Ventas\n";
    cout<<" 5) Realizar compras de ingredientes\n";
    cout<<" 0) Salir\n\n";
    cin >> opcion;
    cin.ignore(10000,'\n');

    switch (opcion)
    {
      case 1:
        propietario->setDatos();
        propietario->imprimirDatos();
        break;
      case 2:
        registroVenta->menu();
        break;            
      case 3:
        ingredientes->imprimirAlmacen();
        break;  
      case 4:
        registroVenta->imprimirTabla();      
        break;  
      case 5:
        ingredientes->Tienda(*registroVenta);
        break;
      default:
        break;
    }
    
  } while (opcion!=0);
}


void OpcionesMenu::clientes()
{
  int opcion=0;
do{

    cout << "\n\n======Menu Cliente======\n\n";
    cout << "Que accion desea realizar: \n";
    cout<<" 1) Ingresar datos personales\n";
    cout<<" 2) Hacer un pedido\n";
    cout<<" 3) Imprimir voucher\n";
    cout<<" 0) Salir\n\n";

    cin >> opcion;
    cin.ignore(10000,'\n');
    switch (opcion)
    {
      case 1:
        cliente->setDatos();
        cliente->imprimirDatos();
        break;

      case 2:
      	platillos.Preparar(*ingredientes,*registroVenta, *voucher);
        
        break;     

      case 3:
        voucher->imprimirDatosVoucher(cliente->getNombre(), cliente->getNumeroTarjeta(), cliente->getTipoTarjeta());
        voucher->imprimirGastos();
        break;

      default:
        break;
    }

  }while(opcion!=0);
}

void OpcionesMenu::menuOpciones()
{
  int opcion=0; //para ingresar a una tabla
  //Ingredientes ingredientes;
  //Platillos platillos;
  do{
    cout << "\n\n======Menu======\n\n";
    cout << "A que modo deseea entrar: \n";
    cout<<" 1) Cliente\n";
    cout<<" 2) Dueno\n";
    cout<<" 0) Salir\n\n";

    cin >> opcion;
    cin.ignore(10000,'\n');
    switch (opcion)
    {
      case 1:
        clientes();
        break;
      case 2:
        dueno();
        break;            
      default:
        break;
    }

  }while(opcion!=0);
}

void OpcionesMenu::escogerPropietario()
{
  cout << "Cual propietario desea ingresar: " << endl;
  for (int i = 0; i < numeroPropietarios; i++)
  {
    cout <<"    "<< i+1 << ") " << propietario[i].getNombre() << endl;  
  }
  
}

void OpcionesMenu::escogerCliente()
{

}