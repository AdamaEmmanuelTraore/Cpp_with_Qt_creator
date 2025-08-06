/*
    ITERATEUR: Bidirectionnel
    Avec les iterateurs bidirectionel je peut parcourir
    les élément a l'inverse.
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l={1, 2, 3};
    auto it=l.end();
    cout<<"Valeur de it avant iteration = "<<*it<<endl; // 3
    --it;
    cout<<"Valeur de it apres iteration = "<<*it<<endl; // 2

    return 0;
}
