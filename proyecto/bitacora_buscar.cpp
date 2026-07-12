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

