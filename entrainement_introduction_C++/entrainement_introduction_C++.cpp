// entrainement_introduction_C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std; 
/*
int age = 10; //on déclare/initialise la variable
unsigned  int monuments = 50;
float poids = 36.2;
double prix = 520.5;
bool estVrai = true;
char caractere = 'a';
std ::string texte = "Mon texte";*/



int main()
{
    std::cout << "Saisir votre prenom" << " ET " << "Saisir le nom " << std :: endl; //chaine de caractere
    //le texte est affiché dans la console directement
    // << permettent de donner le sens de la lecture 
    //system("PAUSE");// met en pause dans le fichier compilé 
   /* std::cout << "Age1 = \n";
    std::cout << age;
    age = 5; //on attribue une nouvelle valeur à age
    std::cout << "Age2 = \n";
    std::cout << age; //remplace le nom par le contenu de la variable
    std::cout << texte;*/

    //int nb{}; //initialisation 
    //std::cin >> nb;// on récupère quelque chose dans la console 
    //va permettre de rentrer un nb, on envoie dc le contenu de la console dans nb
    
    std::string prenom {}; //  équivalent à string prenom; 
    std::string nom;
    std::cin >> prenom >> nom;
    std::cout << "Vous avez saisi : " << prenom <<  " " << nom << "\n";
    //std::cout << "Le double de nb est : " << nb*2 << "\n";
    return 0; //tout c'est bien déroulé

} 

/*
int add() {
    return 5 + 5; // retourne la somme de 5+5
}

void afficher() {
    std::cout << "Message!\n";
}

bool isAdmin() {
    return true; //retourne true si par exemple il est admis
}
*/


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
