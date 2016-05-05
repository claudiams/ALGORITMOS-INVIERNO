#include "inscrito.h"

fecha_hora inscrito::getObjetoFechaHora()
{
	return fh;
}

void inscrito::setObjetoFechaHora(fecha_hora f)
{
	fh = f;
}

estudiante inscrito::getObjetoEstudiante()
{
	return es;
}

void inscrito::setObjetoEstudiante(estudiante e)
{
	es = e;
}

inscrito inscrito::getInscrito()
{
	return *this;
}

void inscrito::setInscrito(inscrito i)
{
	*this = i;
}