#include "inscrito.h"
#include "materia.h"

class inscrito_materia: public inscrito, 
	public materia
{
private:
	inscrito ins;
	materia mat;

public:
	inscrito getObjetoInscrito();
	void setObjetoInscrito(inscrito I);

	materia getObjetoMateria();
	void setObjetoMateria(materia M);

	inscrito_materia getInscritoMateria();
	void setInscritoMateria(inscrito_materia IM);
};