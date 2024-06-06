#include <iostream>
using namespace std;

int main(){
    int num, potencia, fin = 1;
    cout << "Ingresa un numero :";
    cin >> num;
    cout << "Ingresa la potencia: ";
    cin >> potencia;
    
    for(int i = 0; i < potencia; i++) {
        fin *= num;
    }
    
    cout << "El resultado de " << num << " ^ " << potencia << " es " << fin << ": ";
    
    return 0;
}

