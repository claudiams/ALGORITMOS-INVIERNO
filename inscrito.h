#include "fecha_hora.h"
#include "estudiante.h"

class inscrito: public estudiante, public fecha_hora
{
private:
	fecha_hora fh;
	estudiante es;

public:
	fecha_hora getObjetoFechaHora();
	void setObjetoFechaHora(fecha_hora f);

	estudiante getObjetoEstudiante();
	void setObjetoEstudiante(estudiante e);

	inscrito getInscrito();
	void setInscrito(inscrito i);
};

