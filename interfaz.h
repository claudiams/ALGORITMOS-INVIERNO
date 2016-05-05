#include <iostream>
//#include "estudiante.h"
#include "inscrito_materia.h"

using namespace std;

class interfaz
{

public:
	void Menu();

	void insertarEstudiante(estudiante E);

	void insertarFecha(fecha_hora FH);

	void insertarMateria(materia M);

	void insertarInscrito(inscrito I);

	void adicionarMateria(inscrito_materia IM);
};