#include <iostream>
using namespace std;


float entrerNb() {
    static float num{}; // idem que int num; c'est pour initialiser la variable
    cout << "Saisir nombre : " << endl;
    cin >> num;
    // si on veut enchainer les conditions : else if qu'on utilise autant de fois que l'on veut
                      // a savoir que l on utilise avant else if : if et à la fin des else if : else
    while (num == 0) {
        cout << "Veuillez resaisir un nombre \n";
        cin >> num;
    }

    return num;
}
