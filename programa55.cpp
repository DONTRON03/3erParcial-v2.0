#include <iostream>
using namespace std;

int main() {
    int opc;

    cout << "Seleccione el tipo de usuario: \n";
    cout << "1) ** Administrador ** \n";
    cout << "2) ** Usuario Registrado ** \n";
    cout << "3) ** Anonimo **\n";
    cin >> opc;

    switch(opc) {
        case 1:
            cout << "Usted ha accedido como administrador \n";
            cout << "Identifiquese para continuar: \n";
            break;
        case 2:
            cout << "Usted ha accedido como un Usuario Registrado \n";
            cout << "Identifiquese para continuar \n";
            cout << "Ingrese su nombre y apellido\n";
            break;
        case 3: 
            cout << "Usted accedio como anonimo\n";
            break;
        default:
            cout << "Opci�n no v�lida\n";
    }

    return 0;
}

