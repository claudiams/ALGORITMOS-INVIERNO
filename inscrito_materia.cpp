#include "inscrito_materia.h"

inscrito inscrito_materia::getObjetoInscrito()
{
	return ins;
}
	
void inscrito_materia::setObjetoInscrito(inscrito I)
{
	ins = I;
}

materia inscrito_materia::getObjetoMateria()
{
	return mat;
}

void inscrito_materia::setObjetoMateria(materia M)
{
	mat = M;
}

inscrito_materia inscrito_materia::getInscritoMateria()
{
	return *this;
}

void inscrito_materia::setInscritoMateria(inscrito_materia IM)
{
	*this = IM;
}
