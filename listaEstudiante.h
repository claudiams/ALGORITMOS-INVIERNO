#include "estudiante.h"

const int TAMEST = 20;

enum tipoOrden
{
	APELLIDO = 1,
	NOMBRE = 2,
	REGISTRO = 3,
	EDAD = 4,
	CARNET = 5,
	IDENT = 6
};

class listaEstudiante
{
private:
	estudiante lista[TAMEST];
	int Tamanio;

public:
	estudiante getElementoLista(int n);
	void setElementoLista(estudiante E, int n);
	
	int buscarElementoLista(estudiante E, tipoOrden tipo,listaEstudiante &LE);
	void ordenarLista(tipoOrden tipo);

	int getTamanioListaEstudiante();
	void setTamanioListaEstudiante(int n);
};