#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Por favor, introduce un n�mero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El n�mero " << numero << " es par.\n";
    } else {
        cout << "El n�mero " << numero << " es impar.\n";
    }

    if (numero % 3 == 0) {
        cout << "El n�mero " << numero << " es divisible entre 3.\n";
    } else {
        cout << "El n�mero " << numero << " no es divisible entre 3.\n";
    }

    return 0;
}

