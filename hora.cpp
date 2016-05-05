#include "hora.h"


int hora::getMinutos()
{
	return minutos;
}

void hora::setMinutos(int m)
{
	minutos = m;
}

int hora::getSegundos()
{
	return segundos;
}

void hora::setSegundos(int s)
{
	segundos = s;
}

int hora::getHoras()
{
	return horas;
}

void hora::setHoras(int h)
{
	horas = h;
}

hora hora::getObjetoHora()
{
	return *this;
}

void hora::setObjetoHora(hora h)
{
	*this = h;
}