#include <iostream>
#include <string>
#include "ingreso_prestamo.h"
#include "salida_mapa.h"

using namespace std;

// Opcion 3
void procesarSalidaEstudiante(Prestamo reg[100], int &cant, string mat[11][6]) {
    cout << "\n-------- PROCESAR SALIDA Y DEVOLUCION --------" << endl;
    string id_estudiante;
    cout << "Ingrese el codigo del estudiante que se retira: ";
    cin >> id_estudiante;
    
     //Verifica si el estudiante existe y que tipo de recurso tiene
    bool existe_estudiante = false;
    bool tiene_laptop = false;

    for (int i = 0; i < cant; i++) {
        if (reg[i].id_alu == id_estudiante) {
            existe_estudiante = true;
            if (reg[i].tipo == "Laptop") {
                tiene_laptop = true;
            }
            break;
        }
    }
    
     // Liberar silla en caso exista en el sistema
    if (existe_estudiante) {
        if (tiene_laptop) {
            bool silla_liberada = false;
            for (int i = 0; i < 11; i++) {
                for (int j = 0; j < 6; j++) {
                    if (mat[i][j] == id_estudiante) {
                        mat[i][j] = "LIBRE";
                        cout << "[!] Silla liberada con exito en la Mesa " << (i + 1) << ", Silla " << (j + 1) << "." << endl;
                        silla_liberada = true;
                        break;
                    }
                }
                if (silla_liberada) break;
            }
            if (!silla_liberada) {
                cout << "[Aviso] El estudiante tiene Laptop prestada, pero no se encontro silla asignada en el mapa." << endl;
            }
        } else {
            cout << "[Info] El recurso devuelto es de uso externo (no ocupaba silla en la sala)." << endl;
        }
        
	}
}
