#include "Animal.h"
#include <string>
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"
using namespace std;
Animal::Animal(){

}
Animal::Animal(string especie,string nombre,double tamano,string type,Patas patas,Pelaje pelaje,Ojos ojos,Orejas orejas,Cola cola){
	this->especie = especie;
	this->nombre = nombre;
	this->tamano = tamano;
	this->type = type;
	this->patas = patas;
	this->pelaje = pelaje;
	this->ojos = ojos;
	this->orejas = orejas;
	this->cola = cola;
}
string Animal::getType(){
	return type;
}
string Animal::getNombre(){
	return nombre;
}
string Animal::getEspecie(){
	return especie;
}
Animal::~Animal(){

}
