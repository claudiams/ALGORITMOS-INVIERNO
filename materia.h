#include <string>

using namespace std;


class materia
{
private:
	string nombre;
	string descripcion;
	int codigo;

public:
	string getNombre();
	void setNombre(string s);

	string getDescripcion();
	void setDescripcion(string s);

	int getCodigo();
	void setCodigo(int n);

	materia getMateria();
	void setMateria(materia M);
};