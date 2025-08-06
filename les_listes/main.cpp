#include <iostream>
#include <list>

using namespace std;

/*
 * Les listes
    Sont des tableaux dynamiques dans lesquels nous pouvons ajouter ou diminuer
    au début ou à la fin de la liste (il est différent des vector).
    DEFINITION: Une liste chainée est une liste ou suite d'éléments dans laquel chaques
                éléments à une indication (un pointeur qui pointe...) sur l'élément suivant (chainée).
*/

int main()
{
    list<int> iListe;
    iListe.push_back(56);                   // met le numero a la fin de la liste
    iListe.insert(iListe.begin(), 89);      // insert le numero au debut de la liste
    iListe.emplace_back(123);               // met le numero a la fin de la liste
    iListe.insert(iListe.end(), 44);        // met le numero a la fin de la liste
//  iListe.back();                          // affiche le dernier element
//  iListe.clear();                         // netoie toute la liste

//    for (auto i = iListe.begin(); i != iListe.end(); ++i) {
    for(const auto& l : iListe) {           // for de type foreach
        cout << l << endl;
    }
//    cout << iListe.size() << endl;

    return 0;
}
