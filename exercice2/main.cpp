#include <iostream>

using namespace std;

/*
 * Exercice N°2
    Soient les déclarations :
        char c = '\x01';
        short int p = 10;
    Quels sont le type et la valeur de chacune des expressions suivantes :
        p + 3               // 1
        c + 1               // 2
        p + c               // 3
        3 * p + 5 * c       // 4
*/

int main()
{
    int n=5, p=9;
    int q;
    float x ;       // type = int; valeur = 35
    x = p / n;
    cout << x;

    return 0;
}
