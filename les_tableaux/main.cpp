#include <array>        // fichier a inclure pour les tableaux en C++.
#include <iostream>

using namespace std;

/*
    Les tableaux: nous permettent de stocké plusieurs variables.
                  Il existe 2 types de tableaux,
                  - les tableaux statique: leur taille est fixe,
                  - les tableaux dynamique.
*/

int main()
{
    // tableaux statique en C
    int const size1 = 8; // size1 doit etre une constante.
    int x[size1];        // déclaration d'un tableau statique (taille du tabl. est constante).

    // tableaux statique en C++
    const int size2 = 6; // déclaration et initialisation de constante en C++
    array<int, size2> tableau = { 1, 2, 3, 4, 5, 6 }; // déclaration et initialisation de tableau en C++
    cout << "tableau a " << tableau.size() << " éléments \n" << endl; // pour avoir la grandeur du tableau
    cout << "le premier élément du tableau est " << tableau.front() << endl; // .front() pour premier element
    cout << "le dernier élément du tableau est " << tableau.back() << "\n" << endl; // .back() pour dernier element
    for (int i = 0; i < size2; ++i) {
        cout << tableau[i] << endl;
    }

    return 0;
}
