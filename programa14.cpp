#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Introduce el primer numero: ";
    cin >> num1;

    cout << "Introduce el segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "El numero " << num1 << " es mayor que " << num2 << ".\n";
    } else if (num1 < num2) {
        cout << "El numero " << num1 << " es menor que " << num2 << ".\n";
    } else {
        cout << "Los numeros " << num1 << " y " << num2 << " son iguales.\n";
    }
}

