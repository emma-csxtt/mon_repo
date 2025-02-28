//contient les opérations mathématiques que j'appelle dans le fichier entrainement_fonctions&paraemtres_C++
// bien mettre les prototypes dans le header : fichier.h
#include "math.h"
#include <iostream>
using namespace std;

float add(float nb1, float nb2) {

    return nb1 + nb2;
}

float divide(float nb1, float nb2) {
    //empecher l utilisateur de saisir 0 car sinon ca fait planter le programme 
    //gerer les erreurs 
   // if (nb2 != 0) {
        return nb1 / nb2;
    //}
    
    //return 0; // sera executé que si le if ne s'execute pas car le if a deja un retrun qui met un return 
}