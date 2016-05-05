#include "persona.h"

class estudiante : public persona
{
private:
	int numero_registro;
	int carnet_identidad;

public:
	int getNumeroRegistro();
	void setNumeroRegistro(int nr);

	int getCarnetIdentidad();
	void setCarnetIdentidad(int ci);

	estudiante getEstudiante();
	void setEstudiante(estudiante E);
};