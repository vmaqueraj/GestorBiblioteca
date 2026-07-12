#include <iostream>
#include <string>
#include "ingreso_prestamo.h"
#include "bitacora_buscar.h"

using namespace std;

//opcion 5: bitácora de Recursos Prestados
void mostrarBitacora(Prestamo reg[], int cant) {
    cout << "\n====================================\n";
    cout << "     BITACORA DE RECURSOS PRESTADOS    \n";
    cout << "=======================================\n";
    
    if (cant == 0) {
        cout << "No hay recursos prestados en este momento.\n";
        return;
    }
    
    cout << "Cod. Alumno     Tipo         ID Recurso      Titulo de Libro\n";
    cout << "--------------------------------------------------------\n";

    // Recorremos el arreglo
    for (int i = 0; i < cant; i++) {
        cout << reg[i].id_alu << "        " 
             << reg[i].tipo << "         " 
             << reg[i].id_rec << "         " 
             << reg[i].tit << "\n";
    }
    cout << "==================================================\n";
}

//opcion 6: buscar estudiante

void buscarEstudiante(string mat[11][6], Prestamo reg[], int cant) {
    string bus; 
    cout << "\nIngrese el codigo del estudiante a buscar: ";
    cin >> bus;

    int m = -1; 
    int s = -1; 

    // Recorrido de matrices
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 6; j++) {
            if (mat[i][j] == bus) {
                m = i; 
                s = j; 
                break;
            }
        }
        if (m != -1) break;
    }
    
    int recursosEncontrados = 0;
    for(int i = 0; i < cant; i++) {
    	if (reg[i].id_alu == bus) {
    		recursosEncontrados = recursosEncontrados + 1;
		}
	}
	 cout << "\n==================================================\n";
    cout << "              RESULTADO DE LA BUSQUEDA            \n";
    cout << "==================================================\n";

    if (m == -1 && recursosEncontrados == 0) {
        cout << "Estudiante no registrado o activo en el sistema.\n";
    } else {
        cout << "Codigo Alumno: " << bus << "\n";
        
        if (m != -1) {
            cout << "Ubicacion en Sala: Mesa " << m + 1 << ", Silla " << s + 1 << "\n";
        } else {
            cout << "Ubicacion en Sala: No se encuentra en la sala de estudio.\n";
        }

        cout << "Recursos Prestados:\n";
        if (recursosEncontrados == 0) {
            cout << "Ninguno.\n";
        } else {
            for (int i = 0; i < cant; i++) {
                if (reg[i].id_alu == bus) {
                    cout << "- " << reg[i].tipo << " (ID: " << reg[i].id_rec << ") - " << reg[i].tit << "\n";
                }
            }
        }
    }
    cout << "==================================================\n";
}
