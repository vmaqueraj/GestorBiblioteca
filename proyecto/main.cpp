// main.cpp 

#include <iostream>
#include <string>

#include "ingreso_prestamo.h"
// la cabecera de Zaida
// la cabecera de Lia

using namespace std;

const int fil = 11; // Cantidad de mesas
const int col = 6; // Cantidad de sillas por mesa

int main (){
	string mat[11][6]; // Representa la disposición de la biblioteca
	Prestamo reg[100]; // Registro acumulado de préstamos del dia
	int cant = 0; // Contador de préstamos activos
	int opc; // La opción elegida por el usuario
	
	// Se llena la matriz con "LIBRE"
	for (int i=0; i<fil; i++){
		for (int j=0; j<col; j++){
			mat[i][j] = "LIBRE";
		}
	}
	
	// El menú cíclico de la aplicación
	
	do {
		cout << "=========================================================" << endl;
        cout << "            UNIBIBLIO - GESTIÓN DE BIBLIOTECA            " << endl;
        cout << "=========================================================" << endl;
        cout << "1. Registrar ingreso de estudiante" << endl;
        cout << "2. Registrar préstamo (Laptop/Libro)" << endl;
        cout << "3. Procesar salida y devolución total" << endl;
        cout << "4. Ver mapa de la Biblioteca (Disponibilidad de asientos)" << endl;
        cout << "5. Tabla de control de recursos prestados" << endl;
        cout << "6. Buscar estudiante (Localizar ubicación y recursos)" << endl;
        cout << "7. Salir del sistema" << endl;
        cout << "=========================================================" << endl;
        cout << "Elija una opción (1-7): ";
        cin >> opc;
        
        
	} while (opc != 7);
		
	return 0;
}
