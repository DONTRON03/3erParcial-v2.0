#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Por favor, introduce un número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El número " << numero << " es par.\n";
    } else {
        cout << "El número " << numero << " es impar.\n";
    }

    if (numero % 3 == 0) {
        cout << "El número " << numero << " es divisible entre 3.\n";
    } else {
        cout << "El número " << numero << " no es divisible entre 3.\n";
    }

    return 0;
}

