#include <iostream>

using namespace std;

/*
 * EXERCICE 10:
    Écrire un programme qui permet de faire des opérations sur un entier (valeur initiale à 0).
    Le programme affiche la valeur de l'entier puis affiche le menu suivant :
        1. Ajouter 1 ;
        2. Multiplier par 2 ;
        3. Soustraire 4 ;
        4. Quitter.

    Le programme demande alors de taper un entier entre 1 et 4. Si l'utilisateur tape une
    valeur entre 1 et 3, on effectue l'opération, on affiche la nouvelle valeur de l'entier
    puis on réaffiche le menu et ainsi de suite jusqu'à ce qu'on tape 4. Lorsqu'on tape 4, le programme
    se termine.

    Cet exercice a pour but de vérifier les points techniques suivants :
        * utilisation du while ;
        * utilisation du switch ;
        * gestion d'un programme à l'aide d'un menu ;
        * modélisation d'un problème simple sous forme informatique.

    INPUT: entier = 0
    OUTPUT: entier
*/

int main()
{
    int entier=0, choise;

    do {
        cout<<"Valeur actuelle = "<<entier<<endl;
        cout<<"1. Ajouter 1"<<endl;
        cout<<"2. Multiplier par 2"<<endl;
        cout<<"3. Soustraire 4"<<endl;
        cout<<"4. Quitter"<<endl;
        cin>>choise;

        switch (choise) {
        case 1:
            ++entier;
            break;
        case 2:
            entier*=2;
            break;
        case 3:
            entier-=4;
            break;
        default:
            break;
        }
    } while (choise != 4);

    return 0;
}
