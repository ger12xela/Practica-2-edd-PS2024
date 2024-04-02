//============================================================================
// Name        : GestionC.cpp
// Author      : ger12xela--201831010
// Version     :
// Copyright   : PrfaNo cpy
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Split.h"
#include "Insercion.h"
#include "Contacto.h"
using namespace std;

void Consola(){
	vector<string> result;

	do {
		result = comando();
		if (result[0]=="ADD") {
			if (result[1]=="NEW-GROUP") {
				AddGroup(result);
			}else if(result[1]=="CONTACT")
				AddContact(result);
		}else if (result[0]=="FIND") {
		}else{
			cout<<"comando desconocido"<<endl;
		}

	} while (result[0]!="exit");
}
void MenuReportes(){


}
void GraficasEstructuras(){

}

void Exportar(){

}

int main() {
	int entrada = 0;
	while (entrada != 5){

		cout << "----Sistema de gestion de contactos----" << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << "----MENU PRINCIPAL----" << endl;
		cout << " " << endl;
		cout << "----CONSOLA DE COMANDOS         [1]----" << endl;
		cout << "----MENU DE REPORTES            [2]----" << endl;
		cout << "----GRAFICAS DE LAS ESTRUCTURAS [3]----" << endl;
		cout << "----EXPORTACION DE CONTACTOS    [4]----" << endl;
		cout << " " << endl;
		cout << "----SALIR                       [5]----" << endl;

		cin>>entrada;
		std::cin.ignore();

		switch (entrada ) {
		case 1:
			Consola();
			break;
		case 2:
			MenuReportes();
			break;
		case 3:
			GraficasEstructuras();
			break;
		case 4:
			Exportar();
			break;
		case 5:
			cout<<"Salido";
			break;
		default:
			cout<<"opcion invalida intente de nuevo"<<endl;
			break;
		}
	}

	return 0;
}
