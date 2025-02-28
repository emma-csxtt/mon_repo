// entrainement_conditions (if, else.)_C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

int argent = { 100 };
int stock = { 3 }; // nb de produits en stock
int prix = { 50 };
//int quantite{};
bool enLigne = true;
void acheter(int qte);

int main()
{
    //magasin en ligne ou en maintenance // on peut aussi mettre true pour les tests
    unsigned int quantite{};
    cout << "type1: " << typeid(quantite).name() << endl; 
    cout << " Saisir la quantite de produit : " << endl;
    cin >> quantite;

   // if (enLigne) { //if (!enLigne) est la negation 

        if ((stock >= quantite) && enLigne) //on peut mettre 2 conditions
        {
            int val{};
            val = static_cast<int>(quantite); // la valeur sera directement = à la valeur num saisi par l'utilisateur. Le cast permet de mettre num en int
            //acheter(quantite);
            acheter(val); 
        }
        else {
            cout << "pas assez de stock ou le magasin est en maintenance" << endl;
        }
   /**}
    else
    {
        cout << "En maintenance " << endl;
    }*/
    return 0;
}

void acheter(int qte) { // a pour role de faire l achat et egalement verifier si on a assez d'argent
    cout << "qte: " << qte << endl; 
    cout << "type: " << typeid(qte).name() << endl; //retourne le nom du type de la variable
    if ((qte * prix) <= argent)
    {// paranthese en premier à l executiion
        cout << "Achat ok " << endl;
        argent -= (qte  * prix); // pareil que : argent = argent - (qte * prix)
        cout << "Il vous reste : " << argent << " Euros " << endl; 
    }

    else
    {
         cout << "pas assez d'argent " << endl;
    }
    
   

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
