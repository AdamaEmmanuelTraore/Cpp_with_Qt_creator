#include <iostream>

using namespace std;

/*
 * Les références "&":
    Chaque donnée qui est enrégistré en mémoire vive (RAM) a une adresse.
    Cette adresse est un nombre entier dont la taille varie selon notre OS.
    Les références sont des variables esclaves, ce sont des alias (autre accès à la meme donné).
    Leurs avantage principale est qu'elle interdit les copie de variable.
*/

int add(int &a, int &b)
{
    return a + b;
}

void editNumberByRef(int &x)
{
    x = 10;
}

void editNumberByValue(int x)
{
    x = 10;
}

int main()
{
    int number = 9;     // création de la variable
    cout << "L'adresse de 'number' est " << &number << "\n" << endl; // utilise "&" pour acceder a l'adresse.

    // D'autres manipulations avec les références
    int n = 9;
    int &ref = n;  // J'initialise la référence ref du numéro n
    cout << "n vaut  " << ref << "\n" << endl;  // ici j'accède à la valeur de ref qui est n = 9

    // Les références avec les méthodes
    int a = 9;
    int b = 10;
    int c = add(a, b);

    // par référence (pas copie) vs par valeur (copie)
    int val1 = 0;   // nous l'utiliserons par référence
    int val2 = 0;   // nous l'utiliserons par valeur (copie)
    editNumberByRef(val1);
    editNumberByValue(val2);
    cout << "par référence = " << val1 << endl << "par valeur = " << val2 << endl;
    cin.ignore();

    return 0;
}
