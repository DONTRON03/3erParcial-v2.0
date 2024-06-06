#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    string contrasena;
    int intentos = 3;
    while (intentos > 0) {
        cout << "Ingrese el usuario: ";
        cin >> nombre;
        cout << "Ingrese la contraseña: ";
        cin >> contrasena;

        if (nombre == "ROOT" && contrasena == "1234") {
            cout << "Bienvenido al sistema " << nombre << "\n";
            break;
        } else {
            cout << "Datos incorrectos. Intentos restantes: " << intentos - 1 << "\n";
            intentos--;
        }
    }

    if (intentos == 0) {
        cout << "Has agotado tus intentos. Acceso denegado.\n";
    }

    return 0;
}

