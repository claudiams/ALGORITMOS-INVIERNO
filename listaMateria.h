#include "materia.h"
const int TAMEST = 20;

enum tipoOrden
{
	NOMBRE = 1,
	DESCRIPCION=2,
	CODIGO=3

};
class listaMateria
{
private:
	materia lista[TAMEST];
	int Tamanio;

public:
	listaMateria(void);
	~listaMateria(void);
	materia getElementoLista(int n);
	void setElementoLista(materia E, int n);
	
    bool buscarElementoLista(materia M, tipoOrden tipo,listaMateria& LM);
	void ordenarLista(tipoOrden tipo);

	int getTamanioListaMateria();
	void setTamanioListaMateria(int n);
};

