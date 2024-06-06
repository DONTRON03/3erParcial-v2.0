#include <iostream>
using namespace std;

int main() {
    int num[10];
    int i;
    int suma = 0;
    int menor, mayor;

    i = 0;
    while(i < 10) {
        cout << "Ingrese el numero: ";
        cin >> num[i];
        suma += num[i];
        i++;
    }
    menor = num[0];
    for (i = 1; i < 10; i++) {
        if (num[i] < menor) {
            menor = num[i];
        }
    }   
    mayor = num[0];
    for (i = 1; i < 10; i++) {
        if (num[i] > mayor) {
            mayor = num[i];
        }
    }
    cout << "El numero mas grande es: " << mayor << "\n";
    cout << "El numero menor es: " << menor << "\n";
    cout << "La suma de todos los numeros es " << suma;

    return 0;
}

