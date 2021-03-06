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
  bool acceso = true; //ingreso de contrasena correcto
  escogerPropietario();
  cin.ignore(10000,'\n');
  acceso = propietario[indexPropietario].accesoContrasenaPropietario(); //confirmar si hay una contrasena, si lo hay pedida su ingreso para retornar si es correcto o no, de no haber una contrasena nos pedida colocar una y el acceso es true
  if(acceso)
  {
    do
    {
      cout << "\n\n======Dueño======\n\n";
      cout << "A que modo deseea entrar: \n";
      cout<<" 1) Colocar Datos personales\n";
      cout<<" 2) Ingresar al Registro de ventas\n";
      cout<<" 3) Imprimir Almacen\n";
      cout<<" 4) Imprimir Registro de Ventas\n";
      cout<<" 5) Realizar compras de ingredientes\n";
      cout<<" 6) Imprimir Numero de compras y ventas\n";
      cout<<" 0) Salir\n\n";
      datos.ingresoNumero(opcion);
      cin.ignore(10000,'\n');

      switch (opcion)
      {
        case 1:
          propietario[indexPropietario].setContrasena();
          propietario[indexPropietario].setDatos();
          propietario[indexPropietario].imprimirDatos();
          break;
        case 2:
          registroVenta[indexPropietario].menu();
          break;            
        case 3:
          ingredientes[indexPropietario].imprimirAlmacen();
          break;  
        case 4:
          registroVenta[indexPropietario].imprimirTabla();      
          break;  
        case 5:
          ingredientes[indexPropietario].Tienda(registroVenta[indexPropietario]);
          break;
        case 6:
          registroVenta[indexPropietario].imprimirNumeroComprasVentas();
          break;
        default:
          break;
      }
      
    } while (opcion!=0);
  }
}


void OpcionesMenu::clientes()
{
  escogerCliente();
  int opcion=0;
  do{

    cout << "\n\n======Menu Cliente======\n\n";
    cout << "Que accion desea realizar: \n";
    cout<<" 1) Ingresar datos personales\n";
    cout<<" 2) Hacer un pedido\n";
    cout<<" 3) Imprimir voucher\n";
    cout<<" 4) Imprimir numero compras\n";
    cout<<" 0) Salir\n\n";

    datos.ingresoNumero(opcion);
    cin.ignore(10000,'\n');
    switch (opcion)
    {
      case 1:
        cliente[indexCliente].setDatos();
        cliente[indexCliente].imprimirDatos();
        break;

      case 2:
      	platillos.Preparar(ingredientes[indexPropietario],registroVenta[indexPropietario], voucher[indexCliente], cliente[indexCliente]);
        
        break;     

      case 3:
        voucher[indexCliente].imprimirDatosVoucher(cliente[indexCliente].getNombre(), cliente[indexCliente].getNumeroTarjeta(), cliente[indexCliente].getTipoTarjeta());
        voucher[indexCliente].imprimirGastos();
        break;
      case 4: 
      	cliente[indexCliente].imprimirNumeroCompras();
        break;  

      default:
        break;
    }

  }while(opcion!=0);
}

void OpcionesMenu::menuOpciones()
{
  int opcion=0; //para ingresar a una tabla
  do{
    cout << "\n\n======Menu======\n\n";
    cout << "A que modo deseea entrar: \n";
    cout<<" 1) Cliente\n";
    cout<<" 2) Dueno\n";
    cout<<" 0) Salir\n\n";

    datos.ingresoNumero(opcion);
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
  datos.variables_rango(indexPropietario,numeroPropietarios,1);
  indexPropietario--;
}

void OpcionesMenu::escogerCliente()
{
  cout << "Cual escoja su nombre ingresado: " << endl;
  for (int i = 0; i < numeroCliente; i++)
  {
    cout <<"    "<< i+1 << ") " << cliente[i].getNombre() << endl;  
  }
  datos.variables_rango(indexCliente,numeroCliente,1);
  indexCliente--;
}

