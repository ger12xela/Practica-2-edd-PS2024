
#ifndef CREARG_H_
#define CREARG_H_

#include "Grupo.h"
#include "Contacto.h"
#include "Insercion.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;


Grupo* newGroup(vector<string> str);
Contacto* newContacto(vector<string> str, Grupo *grupo);




#endif /* CREARG_H_ */
