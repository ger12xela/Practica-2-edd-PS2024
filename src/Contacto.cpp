#include "Contacto.h"

Contacto::Contacto() {

}

void Contacto::imprimirPre(nodoC *reco)
{
    if (reco != NULL)
    {
        cout << reco->campo << "-";
        imprimirPre(reco->izq);
        imprimirPre(reco->dere);
    }
}
void Contacto::imprimir(){
	imprimirPre(raiz);
	cout<<endl;
}

int Contacto::setRaiz(){
	return raiz->dato;
}

Contacto::~Contacto() {
	// TODO Auto-generated destructor stub
}

void Contacto::insertarNuevo(arbol *nuevo) {
	int x = nuevo->dato;
    nuevo->izq = NULL;
    nuevo->dere = NULL;
    if (raiz == NULL)
        raiz = nuevo;
    else
    {
        arbol *anterior, *reco;
        anterior = NULL;
        reco = raiz;
        while (reco != NULL)
        {
            anterior = reco;
            if (x < reco->dato)
                reco = reco->izq;
            else
                reco = reco->dere;
        }
        if (x < anterior->dato)
            anterior->izq = nuevo;
        else
            anterior->dere = nuevo;
    }
}
