#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

#define PI 3.1416

#define COLOR_MENUONE 13
#define COLOR_DEFAULT 15
#define COLOR_MENUSITODOS 9
#define COLOR_SELECION 11
#define COLOR_MONROE 10

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void limpiarPantalla() {
    system("cls");
}

int main() {
    int h, b, b2, a;
    int opcion = 0;
    bool salir = false;
    const int OPC = 5;

    do {
        limpiarPantalla();
        setColor(COLOR_MENU);
        cout << "***************************************\n";
        cout << "*          Area de Figuras :D         *" << endl;
        cout << "***************************************\n";

        setColor(COLOR_MENUSITODOS);
        cout << "\nEscoja una figura para sacar su area:\n";

        setColor(opcion == 0 ? COLOR_SELECION : COLOR_DEFAULT);
        cout << (opcion == 0 ? "> " : "   ") << "Triangulo\n";
        setColor(opcion == 1 ? COLOR_SELECION : COLOR_DEFAULT);
        cout << (opcion == 1 ? "> " : "   ") << "Trapecio\n";
        setColor(opcion == 2 ? COLOR_SELECION : COLOR_DEFAULT);
        cout << (opcion == 2 ? "> " : "   ") << "Rectangulo\n";
        setColor(opcion == 3 ? COLOR_SELECION : COLOR_DEFAULT);
        cout << (opcion == 3 ? "> " : "   ") << "Circulo\n";
        setColor(opcion == 4 ? COLOR_SELECION : COLOR_DEFAULT);
        cout << (opcion == 4 ? "> " : "   ") << "Salir\n";
        setColor(COLOR_DEFAULT);

        switch (_getch()) {
            case 72:
                opcion = (opcion - 1 + OPC) % OPC;
                break;
            case 80:
                opcion = (opcion + 1) % OPC;
                break;
            case 13:

                switch (opcion) {
                    case 0:
                        limpiarPantalla();
                        setColor(COLOR_MENUSITODOS);
                        cout << "***************************************\n";
                        cout << "*              Triangulo              *" << endl;
                        cout << "***************************************\n";
                        setColor(COLOR_MENUONE);
                        cout << "\nIntroduce la base y altura respectivamente: \n";
                        setColor(COLOR_DEFAULT);
                        cin >> b >> h;
                        a = (b * h) / 2;
                        setColor(COLOR_SELECION);
                        cout << "El area del triangulo es: " << a << endl;
                        setColor(COLOR_DEFAULT);
                        cout << "\nPresiona cualquier tecla para continuar..." << endl;
                        _getch();
                        break;
                    case 1:
                        limpiarPantalla();

                        setColor(COLOR_MENUSITODOS);
                        cout << "***************************************\n";
                        cout << "*              Trapecio              *" << endl;
                        cout << "***************************************\n";
                        setColor(COLOR_MENUONE);
                        cout << "Introduzca las dos bases y la altura respectivamente: \n";
                        setColor(COLOR_DEFAULT);
                        cin >> b >> b2 >> h;
                        a = ((b + b2) * h) / 2;
                        cout << "El area del trapecio es: " << a << endl;
                        setColor(COLOR_DEFAULT);
                        cout << "\nPresiona cualquier tecla para continuar..." << endl;
                        _getch();
                        break;
                    case 2:
                        limpiarPantalla();

                        setColor(COLOR_MENUSITODOS);
                        cout << "***************************************\n";
                        cout << "*              Rectangulo              *" << endl;
                        cout << "***************************************\n";
                        setColor(COLOR_MENUONE);
                        cout << "Introduzca base y altura respectivamente: \n";
                        setColor(COLOR_DEFAULT);
                        cin >> b >> h;
                        a = b * h;
                        cout << "El area del rectangulo es: " << a << endl;
                        setColor(COLOR_DEFAULT);
                        cout << "\nPresiona cualquier tecla para continuar..." << endl;
                        _getch();
                        break;
                        case 3:
                        limpiarPantalla();

                        setColor(COLOR_MENUSITODOS);
                        cout << "***************************************\n";
                        cout << "*               Circulo               *" << endl;
                        cout << "***************************************\n";
                        setColor(COLOR_MENUONE);
                        cout << "Introduzca el Radio: \n";
                        setColor(COLOR_DEFAULT);
                        cin >> b;
                        a = PI*(b*b);
                        cout << "El area del circulo es: " << a << endl;
                        setColor(COLOR_DEFAULT);
                        cout << "\nPresiona cualquier tecla para continuar..." << endl;
                        _getch();
                        break;
                    case 4:
                        salir = true;
                        break;
                }
                break;
            default:
                break;
        }
    } while (!salir);

    return 0;
}
