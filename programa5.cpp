#include <iostream>
using namespace std;

#define horassem 40

int main() {
    float paga, horas, total, porcentaje;
    cout << "Ingrese la paga por hora: ";
    cin >> paga;
    cout << "Ingrese las horas trabajadas en la semana: ";
    cin >> horas;

    if(horas == horassem){
        total = horassem * paga;
        cout << "Su paga total es de: " << total;
    } else if (horas > horassem && horas < 50){
        porcentaje = (horas * paga);
        total = porcentaje + (horas * 0.5);
        cout << "Su paga total es de: " << total;
    } else if (horas >= 50){
        total = (horassem * paga) * 2;
        cout << "Su paga total es de: " << total;
    }

    return 0;
}

