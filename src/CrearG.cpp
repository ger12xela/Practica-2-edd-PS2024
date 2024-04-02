#include "CrearG.h"

Grupo* newGroup(vector<string> str){
	Grupo *newG = new Grupo;
	newG->Nombre = str[2];

	int tam = str.size();
	for (int i = 4; i < tam; i = i+2) {
		if(i%2 == 0){
			campos n;

			//borra parentecis y comas----
			if (i==4) {
				str[i].erase(0,1);
			}
			str[i+1].erase(str[i+1].size()-1,str[i+1].size());

			if (i==tam-2)str[i+1].erase(str[i+1].size()-1,str[i+1].size());
			///////////


			n.tipo = str[i];
			n.nombre = str[i+1];
			newG->camp.push_back(n);
		}
	}

	return newG;
}

Contacto* newContacto(vector<string> str, Grupo *grupo) {
	Contacto *cot = new Contacto;
	int tam = str.size();
	for (int i = 5; i < tam; i = ++i) {
		nodoC *nodo = new nodoC;

		//borra parentesis y comas-----
		if (i==5)str[i].erase(0,1);

		str[i].erase(str[i].size()-1,str[i].size());

		if (i+1==tam)str[i].erase(str[i].size()-1,str[i].size());
		////////////777777

		nodo->tipo = grupo->camp[i-5].nombre;
		cout<<nodo->tipo<<endl;
		nodo->campo = str[i];
		cout<<nodo->campo<<endl;
		int llave;
		for (int i = 0; i < nodo->campo.size(); ++i) {
			llave += nodo->campo[i];
		}
		nodo->dato = llave;
		cot->insertarNuevo(nodo);

	}
	cot->imprimirPre(cot->raiz);
	return cot;

}
