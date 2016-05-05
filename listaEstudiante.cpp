#include "listaEstudiante.h"

estudiante listaEstudiante::getElementoLista(int n)
{
	return lista[n];
}

void listaEstudiante::setElementoLista(estudiante E, int n)
{
	lista[n] = E;
}
	
int listaEstudiante::buscarElementoLista(estudiante E, tipoOrden tipo,listaEstudiante &LE)
{
	int i,j;
	bool comparacion= false;
	estudiante aux;
	i = 0;

	
		while(j < getTamanioListaEstudiante() - 1)
		{
			switch(tipo)
			{
			case APELLIDO:
				comparacion = E.getApellido()==getElementoLista(i).getApellido();
				break;
			
			case NOMBRE:
				comparacion = E.getNombre()<=getElementoLista(i).getNombre();
			break;
			case REGISTRO:
				comparacion =E.getNumeroRegistro() <= getElementoLista(i).getNumeroRegistro();
			break;

			case EDAD:

				comparacion =E.getEdad() >= getElementoLista(i).getEdad();
				break;
	
			case CARNET:
				comparacion =E.getCarnetIdentidad() >= getElementoLista(i).getCarnetIdentidad();
			break;
	
			case IDENT:
				comparacion=E.getIdentificacion() >= getElementoLista(i).getIdentificacion();
				break;
			}

			if(comparacion == true)
			{
				
				LE.setElementoLista(getElementoLista(i),LE.getTamanioListaEstudiante() );
				
			}
			i++;
			
		
	   }
	if(E.getNumeroRegistro() == getElementoLista(i).getNumeroRegistro()) return i;
	else return -1;
}

void listaEstudiante::ordenarLista(tipoOrden tipo)
{
	int i, j;
	estudiante aux;
	bool comparacion;

	i = 0;

	while(i < getTamanioListaEstudiante())
	{
		j = 0;

		while(j < getTamanioListaEstudiante() - 1)
		{
			switch(tipo)
			{
			case APELLIDO:
				comparacion = getElementoLista(j).getApellido()<=getElementoLista(j+1).getApellido();
				break;
			
			case NOMBRE:
				comparacion = getElementoLista(j).getNombre()<=getElementoLista(j+1).getNombre();
			break;
			case REGISTRO:
				comparacion =getElementoLista(j).getNumeroRegistro() <= getElementoLista(j+1).getNumeroRegistro();
			break;

			case EDAD:

				comparacion =getElementoLista(j).getEdad() >= getElementoLista(j+1).getEdad();
				break;
	
			case CARNET:
				comparacion =getElementoLista(j).getCarnetIdentidad() >= getElementoLista(j+1).getCarnetIdentidad();
			break;
	
			case IDENT:
				comparacion=getElementoLista(j).getIdentificacion() >= getElementoLista(j+1).getIdentificacion();
				break;
			}

			if(comparacion == true)
			{
				aux = getElementoLista(j);
				setElementoLista(getElementoLista(j + 1), j);
				setElementoLista(aux, j + 1);
			}
			j++;
		}
		i++;
	}
}

int listaEstudiante::getTamanioListaEstudiante()
{
	return Tamanio;
}

void listaEstudiante::setTamanioListaEstudiante(int n)
{
	Tamanio = n;
}