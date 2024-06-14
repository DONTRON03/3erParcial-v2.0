// Actividad 10_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>

int main() {
    int filas, columnas;

    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    int matriz[filas][columnas];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese un dígito para la posición (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz[i][j];
        }
    }
     cout << "Matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

