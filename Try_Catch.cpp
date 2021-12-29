#include <iostream>
using namespace std;

int main() {
	string nombre;
	cout << "Ingrese su nombre: ";
	try {
		cin >> nombre;
		if(nombre != " ") {
			cout << endl << "Espere un momento..." << endl;
		} else {
			throw 504;
		}
	}
	catch(...) {
		cout << "Error" << endl;
	}
	cin >> nombre;
	return 0;
}







