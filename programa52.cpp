#include <iostream>
using namespace std;
// Alejandro Gallegos Funcion
int calft(int calif1, int calif2, int calif3) {
  return (calif1 * 0.20) + (calif2 * 0.20) + (calif3 * 0.60);
}
// Osvaldo Martinez Garcia/Mendoza Espinosa Adrian :Funci�n
int tot(int calif1, int calif2, int calif3) {
  int max = calif1;
  if (calif2 > max) {
    max = calif2;
  }
  if (calif3 > max) {
    max = calif3;
  }
  return max;
}
int main() {
  int calif[3];
  char r;
  cout << "La califcaci�n 1 vale 20% " << endl;
  cout << "La calificaci�n 2 vale 20% " << endl;
  cout << "La calificaci�n 3 vale el 60" << endl;
  cout << "Desea ingresar una nota: (s/n)\n";
  cin >> r;
  // Vazquez Xochihua Brandon Eric: While
 while(r == 's'|| r == 'S') {
    // L�pez Carreto Abril: estructura for y depuraci�n
    for (int i = 0; i <= 2; i++) {
      cout << "Ingresa la calificaci�n  " << i + 1 << endl;
      cin >> calif[i];
    }
    double prom = calft(calif[0], calif[1], calif[2]);
    cout << "El promedio de las calificaciones es: " << prom << endl;

    int maximaNota = tot(calif[0], calif[1], calif[2]);
    cout << "La nota m�xima es: " << maximaNota << endl;

    cout << "Desea ingresar otras calificaciones? (s/n)" << endl;
    cin >> r;
  }
  return 0;
}

