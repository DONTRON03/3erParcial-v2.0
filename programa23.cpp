#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, potencia, fin;
    cout << "Ingresa un numero :";
    cin >> num;
    cout << "Ingresa la potencia: ";
    cin >> potencia;
    
    fin = pow(num, potencia);
    cout << "El resultado de " << num << " ^ " << potencia << " es " << fin << ": ";
    
    return 0;
}

