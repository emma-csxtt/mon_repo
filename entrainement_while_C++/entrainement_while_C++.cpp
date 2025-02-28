// entrainement_while_C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std; 

int main()
{
	
	/*int num{};
	num = 0; 
	//cout << "Saisir un nombre: " << endl;
	cout << "RESOUDRE 2+2: " << endl; 
	cin >> num;*/ 

	/*while (num != 0) { // si la condition n'est jamais atteinte : on entre dans une boucle infinie 
		//num --; permet d'afficher le 0 car on decremente avant d'afficher 
		cout << num << endl; 
		num = num - 1; // num --; }
	

	while (num != 4) {
		cout << "Ressaisir le resultat de 2+2: " << endl; 
		cin >> num; 
		
	}
	cout << "Bravo " << endl; */

	for (int i{ 1 }; i < 10; i++) { // initialise i=1 et tant que i <10 on execute la boucle 
		cout << "i =: " << i << endl; 
		//if (i == 5) {
			//cout << "On est a la moitie " << endl; 
		//}
		for (int j{ 1 }; j < 10; j++) { 
			cout << "j =: " << j << endl; 
			cout << "Case: " << i << " ; " << j << endl; 

			if (j == 5) {
				break; // si on veut arreter la boucle si j = 5; 
			}
		}
	}

	// on utilise une boucle for si on sait le nb de fois que l on va repeter une operation
	// while : quand on sait la condition d'arret mais on n esait pas combien de fois ca va s'executer 

	cout << "Fin " << endl; 
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
