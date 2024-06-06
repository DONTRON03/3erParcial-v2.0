#include <iostream>
using namespace std;

int main() {
    int num;
    int cont = 0;
    int tot = 0;
    do {
        cout << "Ingresa un numero: ";
        cin >> num;
        if (num != 0) {
            cont++;
            tot += num;
            cout << "El numero es: " << num << "\n";
        }
    } while(num != 0);
    cout << "Cantidad de numeros ingresados: " << cont;
    cout << "Suma total: " << tot;

    return 0;
}

