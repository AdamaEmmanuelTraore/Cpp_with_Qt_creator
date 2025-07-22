#include <iostream>
#include <vector>

using namespace std;

/*
    les tableaux dynamiques: c'est un types de tableau que nous pouvons modifier, augmenter ou diminuer.
                             le tableau le plus simple que nous utiliseront est le (vector).
*/

int main()
{
    vector<int> bullets; // la taille du tableau est 0

    // imaginons que le joueur tire 9 boules
    for (int i = 0; i < 9; ++i) {
        bullets.push_back(i); // j'ajoute "i" boule à la fin du tableau "i" fois.
    }
    cout << "le joueur a tire " << bullets.size() << " boules\n" << endl;

    for (int i = 0; i < bullets.size(); ++i) {
        cout << "\t- Boule " << bullets[i] << endl;
    }

    // le joueur joue...
    // imaginons que le joueur retire 3 boules
    for (int i = 0; i < 3; ++i) {
        bullets.push_back(bullets.size());
    }
    cout << endl << "le joueur a tire " << bullets.size() << " boules\n" << endl;

    for (int i = 0; i < bullets.size(); ++i) {
        cout << "\t- Boule " << bullets[i] << endl;
    }

    return 0;
}

/*
    N.B: Pour accéder à un élément du tableau, nous pouvons utilisé deux façon
         - bullets[x]
         - bullets.at(x) -> le plus conseiller
*/
