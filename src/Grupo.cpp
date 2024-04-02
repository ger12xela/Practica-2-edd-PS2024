/*
 * Grupo.cpp
 *
 *  Created on: 30/03/2024
 *      Author: gerson
 */

#include "Grupo.h"

Grupo::~Grupo() {
}

nodoCont *tablaC[]={NULL, NULL, NULL, NULL, NULL};

void agregar(Contacto cont, int llave){

}

Grupo::Grupo() {
	// TODO Auto-generated constructor stub

}

void Grupo::agregar(Contacto cont, int llave) {
	nodoCont *conta = new nodoCont;
	conta->contacto =cont;
	conta->a = NULL;
	conta->s = tablaC[llave];
	tablaC[llave]= conta;

}

void Grupo::imprimircontgrup() {
	cout<<"TABLA HASH DE.... "<<Nombre<<endl;
	for (int i = 0; i < 5; ++i) {
		nodoCont *p = tablaC[i];
		cout<<i<<"----";
		while(p){
			cout<<p->contacto.raiz->campo<<"****"<<endl;
			p  = p->s;
		}
		cout<<endl;
	}
}
