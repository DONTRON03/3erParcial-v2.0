// Actividad 15_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>
#include <string>
int main(){
	string nombres[] = {"Fernando", "Oscar"};
	int numeros[] = {74, 56, 10};

cout << "Arreglo 1:" << endl;
    for (int i = 0; i < 2; i++) {
	cout << "Dato de la posición " << i << ": " << nombres[i] << endl;
    }

 cout << endl << "Arreglo 2:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Dato de la posición " << i << ": " << numeros[i] << endl;
    }
}
