#include <iostream>
#include <string>
#include <limits>

//funciones

int es_entero();



//variables globales


using namespace std;

int main(){
	
	//variables main
	int opcion_menu;
	
	
	cout << "\n ----------------------- ";
	cout << "\n    Sistema Bancario     ";
	cout << "\n ----------------------- ";
	cout << "\n1: Registro de clientes ";
	cout << "\n2: Registro de abonos ";
	cout << "\n3: Listado general de todos los clientes ";	
	cout << "\n4: Cerrar programa ";
	cout << "\nIngrese el numero de opcion deseada: ";
	opcion_menu = es_entero();
	
	switch (opcion_menu) {
		case 1:
			
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		default:
			cout << "\nSaliendo del programa... ";	
			break;
	}
	
	
	return 0;
}


int es_entero() {
    int valor;
    while (true) {
        if (cin >> valor && valor >= 1 && valor <= 4) {
            return valor;
        } else {
            cout << "Error: El numero debe estar entre 1 y 4." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}
