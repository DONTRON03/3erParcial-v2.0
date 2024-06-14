#include <iostream>
#include <string>
using namespace std;

void usuarios(string usuario) {
  cout << "usted a ingresado como :" << usuario << endl;
}

#define MAX 50
int numeroproduc = 0;
int numUsuarios = 0;

struct producto {
  int id;
  string nombre;
  float precio;
};

producto matriz[MAX];

void vender() {
  cout << "Ingresa la cantidad de productos a agregar:  " << endl;
  cin >> numeroproduc;
  for (int i = 0; i < numeroproduc; i++) {
    cout << "Ingrese el ID del producto " << i + 1 << ": ";
    cin >> matriz[i].id;
    cout << "Ingrese el nombre del producto " << i + 1 << ": ";
    cin >> matriz[i].nombre;
    cout << "Ingrese el precio del producto " << i + 1 << ": ";
    cin >> matriz[i].precio;
  }
}

void crearnew() {
  cout << "Ingresa la cantidad de productos que vas a agregar: \n";
  cin >> numeroproduc;

  for (int i = 0; i < numeroproduc; i++) {
    cout << "Ingrese el ID del producto " << i + 1 << ": ";
    cin >> matriz[i].id;
    cout << "Ingrese el nombre del producto " << i + 1 << ": ";
    cin >> matriz[i].nombre;
    cout << "Ingrese el precio del producto " << i + 1 << ": ";
    cin >> matriz[i].precio;
  }
}

void info() {
  for (int i = 0; i < numeroproduc; i++) {
    cout << "Producto " << i + 1 << ": " << endl;
    cout << "ID: " << matriz[i].id << endl;
    cout << "Nombre: " << matriz[i].nombre << endl;
    cout << "Precio: " << matriz[i].precio << endl;
  }
}

struct usuarioss {
  string usuario;
};

usuarioss usu[MAX];

void crearUsuarioss() {
  cout << "Ingrese el nombre de usuario: ";
  cin >> usu[numUsuarios].usuario;
  numUsuarios++;
}

void mostrarUsuarioss() {
  for (int i = 0; i < numUsuarios; i++) {
    cout << "Usuario " << i + 1 << ": " << usu[i].usuario << endl;
  }
}

void cambiarDatosPersonales() {
  string usuario;
  int indice = -1;

  cout << "Ingrese el nombre de usuario para el que desea cambiar los datos: ";
  cin >> usuario;
  for (int i = 0; i < numUsuarios; i++) {
    if (usu[i].usuario == usuario) {
      indice = i;
      break;
    }
  }

  if (indice != -1) {
    cout << "Ingrese el nuevo nombre de usuario: ";
    cin >> usu[indice].usuario;
  } else {
    cout << "Usuario no encontrado." << endl;
  }
}

struct vendedorsh {
  string vendedor;
  string productovend;
  string recom;
  string recomprodu;
};

vendedorsh vente[MAX];
int numVendedores = 0;
int numProducts = 0;
int recomendacion = 0;
int recomprod = 0;

void nuevovendedor() {
  cout << "Ingrese el nombre del vendedor: ";
  cin >> vente[numVendedores].vendedor;
  cout << "\nIngrese el producto que vende: ";
  cin >> vente[numProducts].productovend;
  numProducts++;
  numVendedores++;
}

void mostrarvendedors() {
  for (int i = 0; i < numVendedores; i++) {
    for (int j = 0; j < numProducts; j++) {
      cout << "Vendedor " << i + 1 << ": " << vente[i].vendedor << " producto "
           << j + 1 << ": " << vente[j].productovend << endl;
    }
  }
}

void recomendar() {
  cout << "Ingrese el nombre del vendedor a recomendar: ";
  cin >> vente[recomendacion].recom;
  cout << "\nIngrese el producto que vende: ";
  cin >> vente[recomprod].recomprodu;
  recomendacion++;
  recomprod++;
}

void vendedorprod() {
  for (int i = 0; i < recomendacion; i++) {
    for (int j = 0; j < recomprod; j++) {
      cout << "Vendedor recomendado " << i + 1 << ": " << vente[i].recom;
      cout << "\n producto " << j + 1 << ": " << vente[j].recomprodu << endl;
    }
  }
}

void menu() {
  cout << "Seleccione el tipo de usuario: \n" << endl;
  cout << "1) ** Administrador ** \n" << endl;
  cout << "2) ** Usuario Registrado ** \n" << endl;
  cout << "3) ** Anonimo **\n" << endl;
  cout << "4) ** Registrarme **\n" << endl;
}

int main() {
  int o, op;
  string usuario;
  do {
    menu();
    cin >> o;
    switch (o) {
    case 1:
      cout << " Usted a accedido como administrador, Identifiquese para "
              "continuar:\n"
           << endl;
      cin >> usuario;
      usuarios(usuario);
      do {
        cout << "\nQue decea hacer?" << endl;
        cout << "1)Dar de alta un nuevo usuario" << endl;
        cout << "2)Mostrar todos los usuarios\n" << endl;
        cout << "3)Mostrar todos los vendedores recomendados por un usuario\n";
        cout << "4)Ver los productos ofrecidos por un vendedor\n" << endl;
        cout << "5)Mostrar todos los productos a la venta\n" << endl;
        cout << "6)Desconectarse (volver a anonimo)\n" << endl;
        cin >> op;
        switch (op) {
        case 1:
          crearUsuarioss();
          break;
        case 2:
          mostrarUsuarioss();
          break;
        case 3:
          mostrarvendedors();
          break;
        case 4:
          vendedorprod();
          break;
        case 5:
          info();
          break;
        case 6:
          op = 0; // Para salir del bucle interno
          break;
        }
      } while (op != 0);
      break;

    case 2:
      cout << " Usted a accedido como un Usuario Registrado \n" << endl;
      cout << " Identifiquese para continuar..." << endl;
      cin >> usuario;
      usuarios(usuario);
      do {
        cout << " \n<Seleccione una opcion>\n" << endl;
        cout << " 1)Modifcar datos personales\n" << endl;
        cout << " 2)Mostrar mis vendedores recomendados\n" << endl;
        cout << " 3)Recomendar vendedor\n" << endl;
        cout << " 4)Ver todos los productos a la venta\n" << endl;
        cout << " 5)Ver todos los productos de los vendedores\n" << endl;
        cout << " 6)Valorar un producto\n" << endl;
        cout << " 7)Poner a la venta un producto\n" << endl;
        cout << " 8)Desconectarse\n" << endl;
        cout << " 0)Salir\n" << endl;
        cin >> op;
        switch (op) {
        case 1:
          cambiarDatosPersonales();
          break;
        case 2:
          vendedorprod();
          break;
        case 3:
          recomendar();
          break;
        case 4:
          info();
          break;
        case 5:
          mostrarvendedors();
          break;
        case 6:
          crearnew();
          break;
        case 7:
          vender();
          break;
        case 8:
          op = 0;
          break;
        default:
          cout << "no es valido";
          break;
        }
      } while (op != 0);
      break;

    case 3:
      cout << "       <Usted accedio como anonimo>\n" << endl;
      cout << "Hola anonimo!\n";
      cout << "Productos a la venta\n" << endl;
      info();
      break;

    case 4:
      crearUsuarioss();
      break;

    default:
      cout << "Opción no válida\n";
    }
  } while (o != 0);
  return 0;
}
