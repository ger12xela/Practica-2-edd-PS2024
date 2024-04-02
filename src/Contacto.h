#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

#ifndef CONTACTO_H_
#define CONTACTO_H_


typedef struct nodoC{
	int dato;
	nodoC *izq, *dere, *padre;
	int fe, altizq, altder;

	string tipo;
	string campo;
}arbol;



class Contacto {
public:

	arbol *raiz = NULL;
	int clave;
	Contacto();
	virtual ~Contacto();
	int setRaiz();
	void insertarNuevo(arbol *nuevo);
	void imprimirPre(nodoC *reco);
	void imprimir();
};

#endif /* CONTACTO_H_ */
