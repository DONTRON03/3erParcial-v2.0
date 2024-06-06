#include <iostream>
using namespace std;

int main() {
    int term;
    cout << "Ingrese la cantidad de terminos quieres que se muestren: ";
    cin >> term;

   for (int i = 0; i < term * 5; i += 5) {
    cout << i << ",";
   }

   return 0;
}

