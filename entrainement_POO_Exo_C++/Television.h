//#pragma once

//methodes : modifient les attributs
//objets uniques car stockés dans un emplacement de la memoire
//les classes communiquent entre elles
// encapsulation = caracteristiques privee ou publique
//caracteristique privee : private : accessible que dans la classe elle meme 
#include <string>
#include <iostream>
using namespace std;

class Television {

private:
	int chaine;
	bool estAllumee;
	string marque;
	int vol;

	//methodes
public:
	void Allumer();
	void Eteindre();
	void SetVolume(int volume); //permet de mettre entre paranthese le volume que l on souhaite
	void ChangerChaine(int c);
	int GetVolume();//retourne le volume, donc permet de retourner l info volume qu il y a dans la caracteristique private

	//attributs

	Television(string marque);//quand on appelle le constructure il sera indispensable d'integrer le nom de la marque



	//constructeur
};