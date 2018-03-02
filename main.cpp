#include <iostream>
#include <string>
#include "Animal.h"
#include "Zoologico.h"
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"
#include <vector>
using namespace std;
//Menu
int menu();
//Liberar Espera
void free(vector<Animal>);
//menu para tipo de animal
int menutip();
//eliminar un animal especifico
void elim(vector<Animal>&);


int main(){
	int op = 0;
	vector<Animal> espera;
	Animal* anim;
	Patas* patas;
	Zoologico* zoo;
	Pelaje* pelaje;
	Ojos* ojos;
	Orejas* orejas;
	Cola* cola;
	int cantpat;
	string name;
	int tamanoz, capac;
	cout<<"Ingrese el nombre del Zoologico: "<<endl;
	cin>>name;
	cout<<"Ingrese el tamano del zoologico: "<<endl;
	cin>>tamanoz;
	cout<<"Ingrese la capacidad del zoologico: "<<endl;
	cin>>capac;
	zoo = new Zoologico(name,tamanoz,capac);
	string nombre,especie,tipo = "",tipopatas,colorpe,coloroj;
	double tamano,largopat,grosor,largopel,tamanoor,capacidad,largocol;
	bool vision,peluda;
	int tip;
	while(op != 5){
		switch(op = menu()){
			case 1:
				cout<<"Ingrese el nombre del animal:"<<endl;
				cin>>nombre;
				cout<<"Ingrese la especie del animal:"<<endl;
				cin>>especie;
				cout<<"Ingrese el tamano del animal:"<<endl;
				cin>>tamano;
				switch(tip = menutip()){
					case 1:
						tipo = "Artica";
						break;
					case 2:
						tipo = "Desertica";
						break;
					case 3:
						tipo = "Jungla";
						break;
					case 4:
						tipo = "Sabana";
						break;
					default:
						tipo = "Sabana";
				}
				//Patas
				cout<<"Ingrese la cantidad de patas:"<<endl;
				cin>>cantpat;
				cout<<"Ingrese el largo de las patas:"<<endl;
				cin>>largopat;
				cout<<"Ingrese el tipo de patas:"<<endl;
				cin>>tipopatas;
				patas = new Patas(cantpat,largopat,tipopatas);
				
				//Pelaje
				cout<<"Ingrese el color del pelaje:"<<endl;
				cin>>colorpe;
				cout<<"Ingrese el grosor del pelaje:"<<endl;
				cin>>grosor;
				cout<<"Ingrese el largo del pelaje:"<<endl;
				cin>>largopel;
				pelaje = new Pelaje(colorpe,grosor,largopel);

				//Ojos
				cout<<"Ingrese el color de los ojos:"<<endl;
				cin>>coloroj;
				cout<<"Tiene vision nocturna(0 Si, 1 No):"<<endl;
				cin>>vision;
				ojos = new Ojos(coloroj,vision);

				//Orejas
				cout<<"Ingrese el tamano de las orejas:"<<endl;
				cin>>tamanoor;
				cout<<"Ingrese la capacidad auditiva:"<<endl;
				cin>>capacidad;
				orejas = new Orejas(tamanoor,capacidad);

				//Cola
				cout<<"Ingrese el largo de la cola:"<<endl;
				cin>>largocol;
				cout<<"La cola es peluda(0 Si, 1 No):"<<endl;
				cin>>peluda;
				cola = new Cola(largocol,peluda);
				anim = new Animal(especie,nombre,tamano,tipo,*patas,*pelaje,*ojos,*orejas,*cola);
				espera.push_back(*anim);
				delete patas;
				delete pelaje;
				delete ojos;
				delete orejas;
				delete cola;
				delete anim;
				patas = NULL;
				pelaje = NULL;
				ojos = NULL;
				orejas = NULL;
				cola = NULL;
				anim = NULL;
				break;
			case 2:
				for(int i = 0; i < espera.size(); i++){
					zoo->addAnimal(espera.at(i));
				}
				espera.clear();
				break;
			case 3:
				zoo->Listar();
				break;
			case 4:
				if(espera.size()>0){
					elim(espera);
				}else{
					cout<<"No hay elementos por eliminar"<<endl;
				}
				break;
			case 5:
				delete anim;
				delete patas;
				delete pelaje;
				delete ojos;
				delete orejas;
				delete cola;
				delete zoo;
				break;
		}
	}
	return 0;
}

int menu(){
	int op;
	cout<<"1: Crear Animal"<<endl
		<<"2: LLenar Zoologico"<<endl
		<<"3: Listar Animales del Zoologico"<<endl
		<<"4: Eliminar un animal especifico de la lista de espera"<<endl
		<<"5: Salir"<<endl;
	cin>>op;
	return op;
}

int menutip(){
	int op;
	cout<<"Ingrese la zona del animal:"<<endl
		<<"1: Zona Artica"<<endl
		<<"2: Zona Desertica"<<endl
		<<"3: Zona de Jungla Tropical"<<endl
		<<"4: Zona Sabana"<<endl;
	cin>>op;
	return op;
}

void elim(vector<Animal>& espera){
	int elim;
	cout<<"Ingrese la posicion del animal a eliminar:"<<endl;
	cin>>elim;
	espera.erase(espera.begin()+elim);
}
