#include <iostream>
#include <string>
using namespace std;

int main(){
    string nombre, contrasena;
    int intentos = 3;
    while (intentos > 0){
        cout << "Ingrese el usuario: ";
        cin >> nombre;
        cout << "Ingrese la contraseña: ";
        cin >> contrasena;

        if (nombre == "AbrilLC" && contrasena == "2b18") {
            cout << "Bienvenido al sistema " << nombre << "\n";
            break;
        } else{
            cout << "Datos incorrectos. Intentos restantes: " << intentos - 1 << "\n";
            intentos--;
        }
    }

    if (intentos == 0) {
        cout << "Has agotado tus intentos. Acceso denegado.\n";
    }
    
    // Aquí va la factura
    int cantidad;
    float precio;
    float total = 0.0;
    
    while (true){
        cout << "Ingresa la cantidad de productos: ";
        cin >> cantidad;
        if(cantidad == 0){
            break;
        } else if (cantidad < 0) {
            cout << "La cantidad debe ser un número positivo. \n";
            continue;
        }
        cout << "Ingrese el precio unitario: ";
        cin >> precio;
        if(precio < 0){
            cout << "El precio debe ser un número positivo. \n";
            continue;
        }
        total += cantidad * precio;
    }
    
    cout << "El precio total es de: " << total;
    
    return 0;
}

