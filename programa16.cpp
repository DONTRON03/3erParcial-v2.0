#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cout << "Ingresa 5 numeros enteros";
    cin >> a >> b >> c >> d >> e;

    if (a < b && a < c && a < d && a < e) {
        cout << a << " es menor";
    } else if (b < a && b < c && b < d && b < e) {
        cout << b << " es menor";
    } else if (c < a && c < b && c < d && c < e) {
        cout << c << " es menor";
    } else if (d < a && d < b && d < c && d < e) {
        cout << d << " es menor";
    } else if (e < a && e < b && e < c && e < d) {
        cout << e << " es menor";
    }

    return 0;
}

