#include <iostream>

using namespace std;    // outils standard du C++ (librairie standard)

int main()
{
    // la boucle while
    while(false) cout << "Bonjour!" << endl; // Ici, Bonjour! ne s'affichera jamais à l'écran.

    // la boucle do...while
    do
        cout << "Bonjour! de do...while \n" << endl;
    while(false);                           // Alors que ici, Bonjour! s'affichera une seule fois.

    // la boucle for
    for (int i = 0; i < 30; ++i) {
        cout << "Bonjour!" << endl;
    }

    return 0;
}


// N.B: on utilise l'opérateur de portée (::) si on ne définis pas la librairie standard.
