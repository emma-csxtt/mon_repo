// entrainement_fonctions&parametres_C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;
#include "math.h" //injecte le contenu math.h dans le fichier principal
//#include "test/math.h" si par exemple dans un sous dossier test

//int nb1, nb2;

//int add(int nb1, int nb2); //prototype = la fonction est connue car on la déclare
//int entrerNb();



/*int entrerNb() {
    int num{};
    cout << "Saisir nombre : " << endl; 
    cin >> num; 
    return num; 

}*/

int main()
{
    /*nb1 = 2;
    nb2 = 3;
    int res = add(3, 7);
    cout << "La somme de"  << " " << nb1 << "+" << nb2 << " = " << res;*/
    //cout << " La somme = " << res; 
    //cout << " La somme vaut " << add(3, 7) << endl;


    float numero = { entrerNb() }; // equivalent à int numero = entrerNb();
    cout << "numero 1 : " << numero << endl;
    float numero2 = { entrerNb() }; //pk accolade ? : initialisation d'une variable ?
    cout << "numero 2 : " << numero2 << endl;
    //cout << "? + 7 = " << add(numero, 7) << endl; 
    cout << numero << " + " << numero2  << " = " << add(numero, numero2) << endl; 
    cout << numero << " / " << numero2 << " = " << divide(numero, numero2) << endl;


    //switch : test pour plusieurs valeurs differentes pour la meme variable.
    // par exemple : 
    /*switch (age) {
          case 10: 
             cout << "10 ans" << endl
             return; 
          default:
             autre
     le switch est donc equivalent aux else if... */ 
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
