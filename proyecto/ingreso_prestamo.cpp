// Opcion 1

#include <iostream>
#include <string>
#include "ingreso_prestamo.h"

using namespace std;

void registrarIngreso(string mat[11][6]) {
	string id_estudiante;
	int mesa, silla; // Recibido por el usuario
	int f, c; // Indices reales de la matriz
	
	cout << "-------- REGISTRAR INGRESO DE ESTUDIANTE --------" << endl;
	cout << "Ingrese el codigo del estudiante: ";
	cin >> id_estudiante;
	
	cout << "Ingrese el numero de mesa (1 a 11): ";
	cin >> mesa;
	
	cout << "Ingrese el numero de silla (1 a 6): ";
	cin >> silla;
	
	f = mesa - 1; // Restamos para que encaje con los indices de C++
	c = silla - 1;
	
	// Verificar si es una posición valida 
	if (f>= 0 && f<11 && c>=0 && c<6) {
		
		// Verificar si la posición esta libre
		if (mat[f][c] == "LIBRE"){
			mat[f][c] = id_estudiante; // Lo registramos
			cout << "Ingreso registrado con exito." << endl;
		} else {
			cout << "La silla " << silla << " de la mesa " << mesa << " ya esta ocupada." << endl;
		}
		
	} else {
		cout << "Error: El numero de mesa o silla ingresado no existe." << endl;
	}
}



// Opcion 2

void registrarPrestamo(Prestamo reg[100], int &cant) {
	// Se valida si hay espacio disponible para hacer prestamos
	if (cant < 100){
		cout << "--------- REGISTRAR PRESTAMO ---------" << endl;
		
		cout << "Ingrese el codigo del estudiante: ";
		cin >> reg[cant].id_alu;
		
		cout << "Ingrese el tipo de recurso (Laptop/Libro): ";
		cin >> reg[cant].tipo;
		
		cout << "Ingrese el codigo/ID del recurso: ";
		cin >> reg[cant].id_rec;
		
		cin.ignore();
		cout << "Ingrese el titulo del libro o marca de la laptop: ";
		getline(cin, reg[cant].tit);
		
		cout << "Prestamo registrado con exito." << endl;
		
		cant = cant + 1;
		
	} else {
		cout << "El registro de prestamos esta lleno. Espere que se libere." << endl;
	}
}

