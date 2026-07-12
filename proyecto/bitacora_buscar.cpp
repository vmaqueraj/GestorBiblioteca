#include <iostream>
#include <string>
#include <iomanip>
#include "ingreso_prestamo.h"
#include "bitacora_buscar.h"

using namespace std;

void mostrarBitacora(Prestamo reg[], int cant) {
    cout << "\n==================================================\n";
    cout << "     BITACORA DE RECURSOS PRESTADOS (ACTIVOS)     \n";
    cout << "==================================================\n";
    
    if (cant == 0) {
        cout << "No hay recursos prestados en este momento.\n";
        return;
    }
}
