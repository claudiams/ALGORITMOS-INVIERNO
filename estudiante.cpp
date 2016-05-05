#include "estudiante.h"

int estudiante::getNumeroRegistro()
{
	return numero_registro;
}

void estudiante::setNumeroRegistro(int nr)
{
	numero_registro = nr;
}

int estudiante::getCarnetIdentidad()
{
	return carnet_identidad;
}

void estudiante::setCarnetIdentidad(int ci)
{
	carnet_identidad = ci;
}

estudiante estudiante::getEstudiante()
{
	return *this;
}

void estudiante::setEstudiante(estudiante E)
{
	*this = E;
}