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
            cout << "Menor al mayor: " << n3 << " " << n2 << " " << n1;
        }
    }
    if (n2 > n1){
        if (n1 > n3){
            cout << "Menor al mayor: " << n3 << " " << n1 << " " << n2;
        }
    }
    if (n3 > n1){
        if (n1 > n2){
            cout << "Menor al mayor: " << n2 << " " << n1 << " " << n3;
        }
    }
    if (n1 > n3){
        if (n3 > n2){
            cout << "Menor al mayor: " << n2 << " " << n3 << " " << n1;
        }
    }
    if (n2 > n3){
        if (n3 > n1){
            cout << "Menor al mayor: " << n1 << " " << n3 << " " << n2;
        }
    }
    if (n3 > n2){
        if (n2 > n1){
            cout << "Menor al mayor: " << n1 << " " << n2 << " " << n3;
        }
    }
}

