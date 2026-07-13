// main.cpp 

#include <iostream>
#include <string>
#include <cstdlib> // Para el system

#include "ingreso_prestamo.h" // Cabecera de Valeria
#include "salida_mapa.h" // Cabecera de Zaida
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
		system("cls");
		
		cout << "=========================================================" << endl;
        cout << "            UNIBIBLIO - GESTION DE BIBLIOTECA            " << endl;
        cout << "=========================================================" << endl;
        cout << "1. Registrar ingreso de estudiante" << endl;
        cout << "2. Registrar prestamo (Laptop/Libro)" << endl;
        cout << "3. Procesar salida y devolucion total" << endl;
        cout << "4. Ver mapa de la Biblioteca (Disponibilidad de asientos)" << endl;
        cout << "5. Tabla de control de recursos prestados" << endl;
        cout << "6. Buscar estudiante (Localizar ubicacion y recursos)" << endl;
        cout << "7. Salir del sistema" << endl;
        cout << "=========================================================" << endl;
        cout << "Elija una opcion (1-7): ";
        cin >> opc;
        
        system("cls");
        
        // Switch de opciones
        switch(opc) {
        	case 1:
        		registrarIngreso(mat);
        		system("pause");
				break;
				
        	case 2:
        		registrarPrestamo(reg, cant, mat);
        		system("pause");
				break;
				
        	case 3:
        		procesarSalidaEstudiante(reg, cant, mat);
        		system("pause");
				break;
        	case 4:
        		visualizarMapaSala(mat);
        		system("pause");
				break;
			case 5:
        		cout << "Opcion en desarrollo por Lia" << endl;
        		system("pause");
				break;
			case 6:
        		cout << "Opcion en desarrollo por Lia" << endl;
        		system("pause");
				break;
			case 7:
        		cout << "Saliendo del sistema UNIBIBLIO, hasta pronto." << endl;
        		system("pause");
				break;
			default:
        		cout << "Opcion no valida. Intente de nuevo." << endl;
        		system("pause");
		}
        
        
	} while (opc != 7);
		
	return 0;
}
