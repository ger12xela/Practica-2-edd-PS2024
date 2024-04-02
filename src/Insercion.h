
#ifndef INSERCION_H_
#define INSERCION_H_
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include "Grupo.h"
#include "CrearG.h"
#include "Contacto.h"
using namespace std;

void AddGroup(vector<string> str);
void AddContact(vector<string> str);
int Keyhash(string nombre);
void colocar(Grupo*, int);
void imprimir();



#endif /* INSERCION_H_ */
