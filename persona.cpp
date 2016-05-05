#include "persona.h"

string persona::getNombre()
{
	return nombre;
}

void persona::setNombre(string c)
{
	nombre = c;
}

string persona::getApellido()
{
	return apellido;
}
void persona::setApellido(string c)
{
	apellido = c;
}


int persona::getEdad()
{
	return edad;
}

void persona::setEdad(int n)
{
	edad = n;
}

int persona::getIdentificacion()
{
	return identificacion;
}


void persona::setIdentificacion(int ID)
{
	identificacion = ID;
}