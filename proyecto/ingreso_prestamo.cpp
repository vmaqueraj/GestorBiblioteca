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
		
		
	} else {
		cout << "Error: El numero de mesa o silla ingresado no existe." << endl;
	}
}
