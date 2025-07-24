#include <iostream>

using namespace std;

/*
 * Exercice N°1
    Éliminer les parenthèses superflues dans les expressions suivantes:
    a = (x+5)           // expression 1
    a = (x=y) + 2       // expression 2
    a = (x==y)          // expression 3
    (a<b) && (c<d)      // expression 4
    (i++) * (n+p)       // expression 5
*/

int main()
{
    int x, y, a, b, c, d, i, n, p;
    a = x + 5;
    a = (x = y) + 2;
    a = x == y;
    a < b && c < d;
    i++ * (n + p);

    return 0;
}
