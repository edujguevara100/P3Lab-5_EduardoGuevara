#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H
#include <string>
#include <vector>
#include "Animal.h"
using namespace std;
class Zoologico{
	private:
		string nombre;
		int tamano;
		int capacidad;
		vector<Animal> ZonaArt;
		vector<Animal> Desertica;
		vector<Animal> Jungla;
		vector<Animal> Sabana;
	public:
		Zoologico();
		Zoologico(string,int,int);
		void addAnimal(Animal);
		void Listar();
		~Zoologico();
	
};
#endif
