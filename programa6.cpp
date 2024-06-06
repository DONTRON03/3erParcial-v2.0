#include <iostream>
using namespace std;

int main() {
    int carta;
    cout << "Ingresa el numero de la carta: \n";
    cin >> carta;

    if(carta == 1){
        cout << "AS";
    } else if (carta == 10){
        cout << "SOTA";
    } else if (carta == 11){
        cout << "CABALLO";
    } else if (carta == 12){
        cout << "REY";
    } else if (carta==2||carta==3||carta==4||carta==5||carta==6||carta==7||carta==8||carta==9){
        cout << "No es ninguna figura ni tampoco AS";
    } else if(carta > 12){
        cout << "Este no es numero de una carta de la baraja española";
    }

}

