#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    if (num1 % num2 == 0) {
        cout << "El primer numero es divisible por el segundo numero.";
    } else {
        cout << "El primer numero no es divisible por el segundo numero.";
    }

    return 0;
}

