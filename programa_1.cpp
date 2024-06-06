#include <iostream>
using namespace std;

int main() {
    int hora;
    
	do{
	cout << "Introduzca la hora: ";
    cin >> hora;
    
    if (hora < 12) {
        cout << "Buenos días";
        break;
    } else if (hora > 11 && hora <= 18) {
        cout << "Buenas tardes";
        break;
    }

    if (hora >= 19 && hora <= 24) {
        cout << "Buenas noches";
        break;
    }
    else{
    	cout <<"\n"<< "Eso no es una hora >:c " << endl;
    	cout << "vuelve a intentar"<<"\n"<< endl;
	}
	}while(true);
}

