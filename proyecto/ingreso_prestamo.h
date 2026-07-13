#ifndef INGRESO_PRESTAMO_H
#define INGRESO_PRESTAMO_H

#include<string>
using namespace std;

struct Prestamo {
	string id_rec; // Código de la laptop o libro
	string tipo; // Tipo de recurso (Laptop/Libro)
	string tit; // Titulo del libro
	string id_alu; // Código del alumno que lo tiene
};

// Funcion para Opción 1
void registrarIngreso(string mat[11][6]);

// Funcion para Opcion 2
void registrarPrestamo(Prestamo reg[100], int &cant, string mat[11][6]); // Por referencia para guardar las modificaciones

#endif
