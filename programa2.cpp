#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cout << "Ingresa 3 números \n";
    cin >> n1;
    cin >> n2;
    cin >> n3;

    if (n1 > n2){
        if (n2 > n3){
            cout << "Menor: " << n3  << ", mayor " << n1 << "\n";
        }
    }
    if (n2 > n1){
        if (n1 > n3){
            cout << "Menor : " << n3 << " , mayor:" << n2 << "\n";
        }
    }
    if (n3 > n1){
        if (n1 > n2){
            cout << "Menor : " << n2 << " , mayor" << n3 << "\n";
        }
    }
    if (n1 > n3){
        if (n3 > n2){
            cout << "Menor : " << n2 << ", mayor:  " << n1 << "\n";
        }
    }
    if (n2 > n3){
        if (n3 > n1){
            cout << "Menor: " << n1 << ", mayor: " << n2 << "\n";
        }
    }
    if (n3 > n2){
        if (n2 > n1){
            cout << "Menor: " << n1 << ", mayor: " << n3 << "\n";
        }
    }

    if(n1 == n2 && n2 == n3) {
        cout << "Todos los números son iguales.\n";
    } else if(n1 == n2) {
        cout << "Los números " << n1 << " y " << n2 << " se repiten.\n";
    } else if(n1 == n3) {
        cout << "Los números " << n1 << " y " << n3 << " se repiten.\n";
    } else if(n2 == n3) {
        cout << "Los números " << n2 << " y " << n3 << " se repiten.\n";
    }

}

