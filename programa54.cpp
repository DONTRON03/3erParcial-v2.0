#include <iostream>
#include <cmath>
using namespace std;
int main(){
double entero;
float dec1, dec2;
cout<<"Ingresa el numero entero: "<<endl;
cin >> entero;
cout<<"ingresa el primer decimal: "<<endl;
cin>>dec1;
cout<<"ingresa el segundo decimal: "<<endl;
cin>>dec2;
//López Carreto Abril: Insiso a
double raiz,raiz2,raiz3;
  raiz=sqrt(entero);
  raiz2=sqrt(dec1);
  raiz3=sqrt(dec2);
cout<<"\nLa raiz cuadrada del numero entero ( "<< entero << " ) es: "<< raiz<<"\n"<<endl;
cout<<"La raiz cuadrada del primer decimal ( "<< dec1 << " ) es: "<< raiz2<<"\n"<<endl;
cout<<"La raiz cuadrada del segundo decimal ( "<< dec2 << " ) es: "<< raiz3<<"\n"<<endl;
}
