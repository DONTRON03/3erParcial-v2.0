#include <iostream>
using namespace std;
int Prod(int AguaS, int AguadeS, int AguadeL) {
  cout << "\nAgua simple $" << AguaS << "\nAgua de Sabor $" << AguadeS
       << "\nAgua de Limon $" << AguadeL << endl;
  return 0;
}

int main() {
    int opc;
    char usuario[20];
     int AguaS = 300;
    int AguadeS = 320;
    int AguadeL = 350;

    cout << "Seleccione el tipo de usuario: \n";
    cout << "1) ** Administrador ** \n";
    cout << "2) ** Usuario Registrado ** \n";
    cout << "3) ** Anonimo **\n";
    cin >> opc;

    switch(opc) {
        case 1:
            cout << " Usted a accedido como administrador \n" << endl;
            cout << " Identifiquese para continuar: \n" << endl;
            cin >> usuario;
            cout << "\nDar de alta un nuevo usuario" << endl;
            cout << "Modificar los datos de un usuario" << endl;
            cout << "Mostrar todos los usuarios" << endl;
            cout << "Mostrar todos los vendedores recomendados por un usuario" << endl;
            cout << "Ver los productos ofrecidos por un vendedor" << endl;
            cout << "Mostrar todos los productos a la venta" << endl;
            cout << "Desconectarse (volver a anonimo)" << endl;
            break;
        case 2:
            cout << "\n<Usted ha accedido como un Usuario Registrado> \n"<<endl;
            cout << "Identifiquese para continuar..."<<endl;
            cin>>usuario;
            cout<<"\n       Bienvenido/a "<<usuario<<"! \n"<<endl;
            cout<<"<Seleccione una opcion>\n"<<endl;
            cout<<"1)Modifcar datos personales\n"<<"2)Mostrar mis vendedore recomendados\n"<<"3)Recomendar vendedor\n"<<"4)Ver todos los productos a la venta\n"<<"5)Ver todos los productos de los vendedores\n";
            cout<<"6)Valorar un producto\n"<<"7)Poner a la venta  un producto\n"<<"8)Desconectarse\n"<<"0)Salir\n"<<endl;
            break;
        case 3:
             cout << "Usted accedio como anonimo" << endl;
            cout << "Identifiquese para continuar: \n" << endl;
            cin >> usuario;
            cout << "Productos a la venta" << endl;
            cout << Prod(AguaS, AguadeS, AguadeL);
            break;
        default:
            cout << "Opción no válida\n";
    }

    return 0;
}

