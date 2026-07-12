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
}
