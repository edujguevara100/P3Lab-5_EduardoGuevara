#include "Zoologico.h"
#include <string>
#include "Animal.h"
#include <vector>
#include <iostream>
using namespace std;
Zoologico::Zoologico(){
	
}

Zoologico::Zoologico(string name, int size, int capac){
	this-> nombre = name;
	this-> tamano = size;
	this-> capacidad = capac;
}

void Zoologico::addAnimal(Animal anim){
	if(anim.getType() == "Artica"){
		ZonaArt.push_back(anim);
	}else if(anim.getType() == "Desertica"){
		Desertica.push_back(anim);
	}else if(anim.getType() == "Jungla"){
		Jungla.push_back(anim);
	}else{
		Sabana.push_back(anim);
	}	
}
	
Zoologico::~Zoologico(){
	ZonaArt.clear();
	Desertica.clear();
	Jungla.clear();
	Sabana.clear();
}
void Zoologico::Listar(){
	cout<<"Zona Artica:"<<endl;
	for(int i = 0; i < ZonaArt.size(); i++){
		cout<<" -"<<(ZonaArt.at(i)).getNombre()<<" "<<(ZonaArt.at(i)).getEspecie()<<" "<<endl;
	}
	cout<<"Zona Desertica:"<<endl;
	for(int i = 0; i < Desertica.size(); i++){
		cout<<" -"<<(Desertica.at(i)).getNombre()<<" "<<(Desertica.at(i)).getEspecie()<<endl;
	}
	cout<<"Zona de Jungla Tropical:"<<endl;
	for(int i = 0; i < Jungla.size(); i++){
		cout<<" -"<<(Jungla.at(i)).getNombre()<<" "<<(Jungla.at(i)).getEspecie()<<endl;
	}
	cout<<"Zona Sabana:"<<endl;
	for (int i = 0; i < Sabana.size(); i ++){
		cout<<" -"<<(Sabana.at(i)).getNombre()<<" "<<(Sabana.at(i)).getEspecie()<<endl;
	}
}
