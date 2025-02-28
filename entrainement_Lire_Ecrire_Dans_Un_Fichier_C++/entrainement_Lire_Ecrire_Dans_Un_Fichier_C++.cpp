// entrainement_Lire_Ecrire_Dans_Un_Fichier_C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std; 


int main()
{
    
    //ofstream outFile{ "demo.txt" }; //ofstream est le type de la variable pour notre fichier
    ifstream inFile{ "demo.txt" };
    //if (!outFile) { // si le fichier n'est pas trouve
    if(!inFile){
      
        cerr << "Impossible de gerer  le fichier ";//console error
        return -1;
    }
    //outFile << "Ma ligne 1 \n";//permet d'ecrire dans le fichier demo.txt cree
    //outFile << "Ma ligne 2 \n";

    while (inFile) {//on boucle jusqu'a ce que l on finisse de lire notre fichier
        string txt; //chaque mot stocké dans la variable 
        //inFile >> txt; // recupere le contenu et le met dans txt
        getline(inFile, txt); // on recupere ce que l on a jusqu a la prochaine ligne et on l injecte dans txt
        cout << txt << endl ; //pour afficher ce que l on a recupere
    }
    cout << "Fin du programme " << endl; 
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
