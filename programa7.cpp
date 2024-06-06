#include <iostream>
using namespace std;

int main() {
    int h, b, b2, t, a, opc;
    cout << "Escoja una figura para sacar su area: \n 1)Triangulo  2)Trapecio  3)Rectangulo \n";
    cin >> opc;

    switch(opc) {
        case 1: 
            cout << "Introduce la base y altura respectivamente:  \n";
            cin >> b >> h;
            a = (b * h) / 2;
            cout << "El area es de: " << a;    
            break;
        case 2:
            cout << "Introduzca las bases y altura respectivamente: \n";
            cin >> b >> b2 >> h;
            a = (b + b2) * h;
            t = a / 2;
            cout << "El area es de: " << a;    
            break;
        case 3:
            cout << "Introduzca base y altura respectivamente: \n";
            cin >> b >> h;
            a = b * h;
            cout << "El area es de: " << a;    
            break;
        default:
            cout << "El area es de: " << a;    
    }

}

