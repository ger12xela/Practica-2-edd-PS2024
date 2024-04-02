
#ifndef GRUPO_H_
#define GRUPO_H_

#include "Contacto.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

struct campos{
	string tipo;
	string nombre;
};
typedef campos campos;

struct nodoCont{
	Contacto contacto;
	nodoCont *a, *s;
};typedef nodoCont contac;




class Grupo {
public:
	virtual ~Grupo();
	Grupo();
	int Clave;
	string Nombre;
	vector<campos> camp;
	void agregar(Contacto cont, int llave);
	void imprimircontgrup();

};

#endif /* GRUPO_H_ */
