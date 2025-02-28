// entrainement_tableau(array)_C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <array> //acces aux fonctions specifiques des tableaux
#include <string>
using namespace std;
void show(char s[]); // prototype pareil  que void show(char*);
void show(string s); //prototype pareil que void show(string); 

//exo : crypter le mot de l utilisateur saisit par exemple salut
//afficher le mot crypté à l ecran avec par exemple +10 a chaque lettre via le tableau ASCII car chaque lettre correspond à un num
//decrypter et afficher le mot de base 
void encrypt(char*);
void decrypt(char*);

//le tableau est utile si par exemple on a plusieurs user et que l on veut savoir lesquels ont un age > 18
//comme chaque variable aura donc un nom different il faudra faire des condistions pour chaque user
//pas de boucle possible pour tous les users 
//donc on stocke leur age dans un tableau (donc toutes les valeurs (age) de chacun
//on peut imaginer chaque case du tableau comme etant des tiroirs qui sont dans la memoire
//premier indicie du tableau est 0 


int main()
{
    /*
    //int ages[10] = { 18, 12, 19, 22, 23, 9, 28, 30, 4, 1 }; //ligne suivante equivalente mais +rigoureuse
    int agesBase[10] = { 18, 12, 19, 22, 23, 9, 28, 30, 4, 1 };
    array<int,10> ages = { 18, 12, 19, 22, 23, 9, 28, 30, 4, 1 };
    int nbMajeur{ }; //idem que int nbMajeur{ 0 }; 

    
   //for (int i{ 0 }; i <= 9; i++) // la ligne suivante est equivalente mais + rigoureuse
    for (int i { 0 }; i < ages.size(); i++)// si on met <= on va depasser la taille de la memoire 
    {
        if (ages[i] >= 18) {
       
            nbMajeur++;
        }
   }
    //cout << "ages[5] = " << ages[5] << endl; 
    cout << "nbMajeur = " << nbMajeur << endl; 
    cout << "taille de agesBase= " << end(agesBase) - begin(agesBase); // equivalent de ages.size()
    */

    char caractere{};
    caractere = 'a'; // en ASCII 97
    caractere = 'A'; // 65
    string phrase; //chaine de caractere : ensemble de lettres collees
    //stocker un mot : on passe par un tableau
    char mot[6];//'S' 'a' 'l' 'u' 't'
    
   

    cout << "Saisir 'Salut' " << endl; 
    //cin >> mot; 
    cin.get(mot, 6); // permet de saisir le mot jusqu'à 10 caractere
    //cout << mot << endl; 
    //show(mot);
    encrypt(mot); 
    decrypt(mot); 

    cout << "Saisir une phrase: " << endl; 
    cin.ignore();// permet d'ignorer ce qu il y a dans cin sinon il va considérer qu'il y a deja qqlc et dc la saisit sera pas possible 
    getline(cin, phrase); 
    //cout << phrase << endl;
    show(phrase); 

    return 0; 

}

void show(char s[]) {
    cout << s << endl; 
}

void show(string s) {
    cout << s << endl;
}

void encrypt(char encr[]) {
    
    
    cout << "Le mot 'Salut' va etre encrypte " << endl;
    for (int i{ 0 }; i < 5; i++) {
        encr[i] = encr[i] + 10;
        
    }


    cout << encr << endl;
    

}
void decrypt(char decryp[]) {
     
    cout << "Le mot encrypte va etre decrypte : " << endl; 
    for (int i{ 0 }; i < 5; i++) {
        decryp[i] = decryp[i] - 10; 
        //cout << "La case: " << i << "est decrypte: " << decryp[i] << endl; 

    }
    cout << decryp << endl; 
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
