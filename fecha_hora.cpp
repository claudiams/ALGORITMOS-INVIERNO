#include "fecha_hora.h"	

fecha_hora fecha_hora::getFechaHora()
{
	return *this;
}

void fecha_hora::setFechaHora(fecha_hora fh)
{
	*this = fh;
}

fecha fecha_hora::getFecha()
{
	return fechas;
}

void fecha_hora::setFecha(fecha f)
{
	fechas = f;
}

hora fecha_hora::getHora()
{
	return horas;
}

void fecha_hora::setHora(hora h)
{
	horas = h;
}