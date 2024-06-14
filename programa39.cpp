// Actividad 8_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>

int main() {
    int tamaño;

    cout << "Ingrese el número de posiciones: ";
    cin >> tamaño;
    int numeros[tamaño];

    int positivos = 0;
    int negativos = 0;
    
    for (int i = 0; i <= tamaño; ++i) {
        cout << "Ingrese el número en la posición " << i + 1 << ": ";
        cin >> numeros[i];
        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        }
    }
     cout << "Cantidad de números positivos: " << positivos << endl;
    cout << "Cantidad de números negativos: " << negativos << endl;

}

