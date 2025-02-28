// entrainement_introduction_POO_classes_intanciation_C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std; 


//heritage : classe enfant herite de la classe parent 
//Perso classe parent 
class Perso {

public: // variable:accessible/modifiable par tous
	int xp; 
	int power; 
	


	Perso(int xp2 = 0)//constructeur: etat initial du personnage 
	{
		xp = xp2;
		gold = 10;
		power = 10;
	}
//protected://idem que private : la classe fille a acces a ces proprietes; mais ds la methode pareil que private (celle ci pas accessible par la classe fille)
	
	void increaseGold(int piece) {
		gold += piece; // gold = gold + piece
	}
	void setGold(int valeur) {
		gold = valeur; 
	}

	int getGold() {
		return gold;
	}
private:
	
	int gold; 
};

//heritage; et donc recupere toutes les caracteristiques/comportement de la classe Perso
class Archer : public Perso {//classe fille herite de la classe parent Perso
public: 
	int distance; 
	//on pourrait avoir un constructeur , des fonctions
};

class Guerrier : public Perso {
public:
	int bouclier; 

 
};

int main()
{
	//Instanciation de la classe : 
	//Perso personnage1(50);//Perso devient le type
	//Perso personnage2; 
	//personnage1.setGold(100);
	//personnage1.xp = 0;
	//personnage1.power = 10; // le point permet d'acceder à la propriete en question 
	Archer personnage1;
	Guerrier personnage2; 
	personnage2.xp = 5; 

	cout << "Personnage1 xp : " << personnage1.xp << endl; 
	cout << "Personnage2 xp : " << personnage2.xp << endl;
	cout << "Personnage1 gold: " << personnage1.getGold() << endl; 
	//personnage1.increaseGold(40); //possible car on est en public si on avait ete en privé ca n'aurait pas fonctioonné 
	//cout << "Personnage1 gold : " << personnage1.getGold() << endl;
	personnage1.distance = 40; 
	personnage2.bouclier = 100; 
	cout << "Perso1 dist " << personnage1.distance << endl; 
	cout << "Perso2 bouclier " << personnage2.bouclier << endl; 

	return 0; 
}























// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
