// entrainement_POO_Exo_C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Television.h"
using namespace std;


Television::Television(string marque) {//les :: permettent d'acceder a une methode ici on souhaite acceder a la methode constructeur
    this->marque = marque; //this : correspond a la classe Television que l on est en train de creer
    //-> : on va acceder à qqlc contenu ds notre classe 
    //marque : chose a laquelle on souhaite acceder
    //marque est dans la caracteristique private et on peut acceder a cette propriete car elle est ds la classe Television (celle ou l'on est)
    // = marque : correspond au paraemetre de la fonctiondonc different du premier marque qui est la variable dans private
    
    this->estAllumee = false; //par defaut la tele est eteinte

}

void Television::Allumer() {//:: devant chaque methode pour indiquer que ce sont les membres de la classe que ns sommes en train d'implementer
    this->estAllumee = true;
    cout << "La tele est allumee" << endl; 
}

void Television::Eteindre() {
    this->estAllumee = false; 
    cout << "La tele est eteinte" << endl; 
}

void Television::SetVolume(int volume) {
    this-> vol= volume;
    cout << "Le volume de la tele est de: " << vol << endl; 
}

void Television::ChangerChaine(int c) {
    this->chaine = c;
}

int Television::GetVolume() {
    
    return this->vol;
}
int main()
{
    Television tv1("samsung");//creation du premier objet
    tv1.Allumer();
    tv1.SetVolume(80);//80%
    tv1.GetVolume();
    cout << tv1.GetVolume() << endl; 
    
    Television* tv2 = new Television("Philips");//pointeur vers l objet tv2
    tv2->SetVolume(50);//fleche car tv2 pointeur donc on souhaite appeler la fonction SetVolume pour l objet tv2
    
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
