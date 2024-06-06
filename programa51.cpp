#include <iostream>
#include <string>
using namespace std;

float calcular (int cantidad, float precio){
	return cantidad*precio;
}

int main(){
	
	string nombre;
	string contrasena;
	int intentos=3;
	while (intentos > 0){
        cout << "Ingrese el usuario: ";
        cin >> nombre;
        cout << "Ingrese la contraseña: ";
        cin >> contrasena;

        if (nombre == "AbrilLC" && contrasena == "2b18") {
            cout << "Bienvenido al sistema " << nombre << "\n"<<endl;
            break;
        } else {
            cout << "Datos incorrectos. Intentos restantes: " << intentos - 1 << "\n";
            intentos--;
        }
    }

    if (intentos == 0) {
        cout << "Has agotado tus intentos. Acceso denegado.\n";
	}
    
    // aqui va la factura, tendra estructuras diferentes y funciones
    cout << " //////////////////////////////////////////////////////// "<< "\n"<<endl;
	int cantidad;
	float precio;
	float total = 0.0;
	char facturarOtraVez;
	
	do {
		float totalFactura = 0.0;
		do {
			cout << "Ingresa la cantidad de productos: ";
			cin >> cantidad;
			
			if (cantidad < 0){
				cout << "La cantidad debe ser un numero positivo. \n";
				continue;
			}
			if (cantidad == 0){
				break;
			}
			cout << "Ingrese el precio unitario: ";
	 		cin >> precio;
	 		
	 		if (precio < 0){
	 			cout << "El precio debe ser un numero positivo. \n";
	 			continue;
			 }
			 totalFactura += calcular(cantidad,precio);
		} while (1);
		total += totalFactura;
		cout << "El precio total de la factura es de: " << totalFactura <<"\n"<<endl;
    	cout << " //////////////////////////////////////////////////////// "<< "\n"<<endl;
		cout << "Desea facturar a otra vez? (s/n): ";
		cin >> facturarOtraVez;
	} while (facturarOtraVez == 's' || facturarOtraVez == 'S');
	cout << " //////////////////////////////////////////////////////// "<< "\n"<<endl;
	cout << "El precio total del dia es de: " << total <<"\n"<<endl;
	cout << " //////////////////////////////////////////////////////// "<< "\n"<<endl;
		
	return 0;
}

