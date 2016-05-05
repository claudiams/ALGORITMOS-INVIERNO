#include "fecha.h"

int fecha::getDia()
{
	return dia;
}

void fecha::setDia(int d)
{
	dia = d;
}

int fecha::getMes()
{
	return mes;
}

void fecha::setMes(int m)
{
	mes = m;
}

int fecha::getanio()
{
	return anio;
}

void fecha::setanio(int a)
{
	anio = a;
}

fecha fecha::getFecha()
{
	return *this;
}

void fecha::setFecha(fecha f)
{
	*this = f;
}