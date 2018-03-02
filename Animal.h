#ifndef ANIMAL_H
#define ANIMAL_H
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"
#include <string>
using namespace std;
class Animal{
	private:
		string especie;
		string nombre;
		double tamano;
		string type;
		Patas patas;
		Pelaje pelaje;
		Ojos ojos;
		Orejas orejas;
		Cola cola;
	public:
		string getType();
		string getEspecie();
		Animal();
		string getNombre();
		Animal(string, string, double, string, Patas, Pelaje, Ojos, Orejas, Cola);
		~Animal();


};
#endif
