// Actividad 7_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>
#include <cstdlib> 
int main() {
	std::srand(100);
	int numeros[10];
	
	 for (int i = 0; i < 10; ++i) {
        numeros[i] = std::rand() % 100; 
    }
    
        for (int i = 0; i < 10; ++i) {
        std::cout << "El numero en la posicion " << i + 1 << " es " << numeros[i] << std::endl;
    	}
    	
}
