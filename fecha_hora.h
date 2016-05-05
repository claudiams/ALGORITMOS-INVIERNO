#include "fecha.h"
#include "hora.h"

class fecha_hora
{
private:

	hora horas;
	fecha fechas;

public:

	fecha_hora getFechaHora();
	void setFechaHora(fecha_hora fh);

	fecha getFecha();
	void setFecha(fecha f);

	hora getHora();
	void setHora(hora h);
};