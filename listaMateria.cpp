#include "listaMateria.h"


listaMateria::listaMateria(void)
{
}


listaMateria::~listaMateria(void)
{
}
materia listaMateria::getElementoLista(int n)
{
	return lista[n];
}

void listaMateria::setElementoLista(materia E, int n)
{
	lista[n] = E;
}
	
bool listaMateria:: buscarElementoLista(materia M, tipoOrden tipo,listaMateria& LM)
{
	int i,j;
	bool comparacion= false;
    Tamanio = 0;
	i = 0;

	
		while(i < getTamanioListaMateria())
		{
            switch (tipo) {
                case   NOMBRE:
                    comparacion = getElementoLista(j).getNombre() ==getElementoLista(j+1).getNombre();
                    break;
                    
                case DESCRIPCION:
                    comparacion = getElementoLista(j).getDescripcion()==getElementoLista(j+1).getDescripcion();
                    break;
                case CODIGO:
                    comparacion =getElementoLista(j).getCodigo()== getElementoLista(j+1).getCodigo();
                    break;
                    
                default:
                    break;
            }
			if(comparacion)
			{
                LM.setElementoLista(getElementoLista(i), LM.getTamanioListaMateria());
                Tamanio++;
			}
			i++;
		}
    if(Tamanio < 0)
        return false;
    else
        return true;
			
		
}


void listaMateria::ordenarLista(tipoOrden tipo)
{
	int i, j;
	materia aux;
	bool comparacion;

	i = 0;

	while(i < Tamanio)
	{
		j = 0;

		while(j < getTamanioListaMateria() - 1)
		{
			switch(tipo)
			{
			case   NOMBRE:
				comparacion = getElementoLista(j).getNombre() ==getElementoLista(j+1).getNombre();
				break;
			
			case DESCRIPCION:
				comparacion = getElementoLista(j).getDescripcion()==getElementoLista(j+1).getDescripcion();
			break;
			case CODIGO:
				comparacion =getElementoLista(j).getCodigo()== getElementoLista(j+1).getCodigo();
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

int listaMateria::getTamanioListaMateria()
{
	return Tamanio;
}

void listaMateria::setTamanioListaMateria(int n)
{
	Tamanio = n;
}