#include <iostream>

using namespace std;

/*
 * Les pointeurs "*":
    comme les références, les pointeurs permettent de d'éliminer les copies des variable.
    Avec les pointeurs nous controllons nous meme la mémoire alloué en le fessant
    manuellement (allocation dynamique avec "new" et destruction avec "delete").
*/

int add(int * a, int * b)
{
    return *a + *b;
}

int main()
{
    int *pointeur = new int(9);
    cout << "Valeur de la valeur pointee : " << *pointeur << endl;  // Affiche 9
    cout << "Adresse de la valeur pointee : " << *&pointeur << endl;    // Adresse de 9
    cout << "Valeur du pointeur : " << pointeur << endl;    // Adresse de 9
    cout << "Adresse du pointeur : " << &pointeur << endl;  // Adresse de pointeur

    cout << "Suppression de la valeur pointee..." << endl << endl;
    delete pointeur;
    pointeur = nullptr;     // Initialisation du pointeur a null (nullptr)

    cout << "Valeur du pointeur : " << pointeur << endl;
    cout << "Adresse du pointeur : " << &pointeur << "\n" << endl;

    // accéder a la valeur pointée
    int *p = new int(5);    // allocation dynamique de la mémoire
    int valeur = *p;    // ici j'initialise valeur a *p = 5, donc valeur = 5.
    cout << valeur << endl; // Affichera 5
    cout << *p << endl; // Affichera 5
    cout << p << "\n" << endl; // Affichera l'adresse mémoire de la valeur
    delete p;   // libération de la mémoire allouée.
    p = nullptr;

    // Les pointeurs avec les méthodes
    int *a = new int(9);
    int *b = new int(12);
    int c = add(a, b);
    cout << c << endl;
    delete a;
    a = nullptr;
    delete b;
    b = nullptr;

    return 0;
}

// N.B: Les pointeurs doivent toujour etre assigner(initialisé) ou peuvent initialisé par nullptr.
