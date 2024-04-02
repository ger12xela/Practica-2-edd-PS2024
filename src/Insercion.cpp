#include "Insercion.h"
# define tam 5

struct nodoG{
	Grupo *grupo;
	nodoG *s, *a;
};

// variables a utilizar
int ingresos;
nodoG *tablaA[]= {NULL, NULL, NULL, NULL, NULL};

int numGroups [tam];
vector<Grupo> grupos;


void initgrupo(){
	for (int i = 0; i < tam; ++i) {
		numGroups[i]=-1;
	}
}

void AddGroup(vector<string> str){
	cout<<"agregando Grupo"<<endl;

	Grupo *Nuevogrupo = newGroup(str);
	int llave = Keyhash(Nuevogrupo->Nombre);
	colocar(Nuevogrupo, llave);

	for (int i = 0; i < tam; ++i) {
		nodoG *p = tablaA[i];
		cout<<i<<"----";
		while(p){
			cout<<p->grupo->Nombre;
			p  = p->s;
		}
		cout<<endl;
	}
//	cout<<"agregando Grupo---"<<Nuevogrupo->Nombre<<endl;
//	for (int i = 0; i < Nuevogrupo->camp.size(); ++i) {
//		cout<<Nuevogrupo->camp[i].tipo<<endl;
//		cout<<Nuevogrupo->camp[i].nombre<<endl;
//	}
}

void colocar(Grupo *gpo, int llave) {
	nodoG *nuevo = new nodoG;
	nuevo->grupo = gpo;
	nuevo->a= NULL;
	nuevo->s = tablaA[llave];
	tablaA[llave] = nuevo;
}

nodoG* buscarGrupo(string nombre, int llave){
	nodoG *p = tablaA[llave];
	while(p){
		if(nombre == p->grupo->Nombre){
			return p;
		}
		p= p->s;
	}
	return NULL;
}

//agregar contactos

void AddContact(vector<string> str){
	cout<<"agregando contacto"<<endl;
	int llave = Keyhash(str[3]);
	nodoG *t = buscarGrupo(str[3], llave);
	if (t) {
		cout<<t->grupo->Nombre<<endl;
		Contacto *nuevo = newContacto(str, t->grupo);
		t->grupo->agregar(*nuevo, Keyhash(nuevo->raiz->campo));
		cout<<"contacto agregado a .."<<t->grupo->Nombre<<endl;
		t->grupo->imprimircontgrup();

	}else{cout<<"contacto no econtrado"<<endl;}
}

// llave hash para la clave------------------------------
int Keyhash(string nombre) {

	int llave = 0;
	for (int i = 0; i < nombre.size(); ++i) {
		llave += nombre[i];
	}
	return llave % tam;
}
