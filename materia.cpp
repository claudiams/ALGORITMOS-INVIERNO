#include "materia.h"

string materia::getNombre()
{
	return nombre;
}

void materia::setNombre(string s)
{
	nombre = s;
}

string materia::getDescripcion()
{
	return descripcion;
}

void materia::setDescripcion(string s)
{
	descripcion = s;
}

int materia::getCodigo()
{
	return codigo;
}

void materia::setCodigo(int n)
{
	codigo = n;
}

materia materia::getMateria()
{
	return *this;
}

void materia::setMateria(materia M)
{
	*this = M;
}

//inscrito_materia