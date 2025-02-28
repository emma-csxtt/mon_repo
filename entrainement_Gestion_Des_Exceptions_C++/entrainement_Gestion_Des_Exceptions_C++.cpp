// entrainement_Gestion_Des_Exceptions_C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std; 

int main()
{
	int demo[5] = { 10, 20, 30, 40, 50 }; 
	int nb{};
	cout << "Saisir nb: " << nb << endl; 
	cin >> nb; 
	if (nb < 5) {
		cout << "demo[nb] : " << demo[nb] << endl;// affiche le nombre à l indice du nb du tableau ecrit par l utilisateur  
	}
	else {
		//exception : utile pour des operations risquees pour eviter le plantage
		try {
			throw - 1;//permet de faire planter le programme si la condition if n est pas realisee
		}//le try : permet au programme d essayer de faire l instruction
		catch (int error){ //attraper l erreur avant de faire planter le porgramme
			cout << "Probleme code erreur: " << error << endl;// le code d erreur affiche sera -1
		}
	}
	cout << "Fin du programme " << endl; // s affiche meme si ca plante car l exception ne fait pas planter le programme
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
