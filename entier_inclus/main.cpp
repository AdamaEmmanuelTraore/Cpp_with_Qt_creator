#include <iostream>

using namespace std;

/*
 * EXERCICE 9:
    Écrire un programme qui demande à l’utilisateur de taper un entier N entre 0
    et 20 bornes incluses et qui affiche N+17. Si on tape une valeur erronée, il faut
    afficher "erreur" et demander de saisir à nouveau l'entier.
    Input: entier
    Output: entier(positive), string(negative)
*/

int main()
{
    int entier, somme;
    cout<<"Entre un entier entre 0 et 20"<<endl;
    cin>>entier;

    if (entier>=0 && entier<=20) {
        somme=entier+17;
        cout<<somme<<endl;
    } else {
        cerr<<"Saisie à nouveau l'entier"<<endl;
    }

    return 0;
}
