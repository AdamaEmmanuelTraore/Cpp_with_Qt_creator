#include <iostream>

using namespace std;

/*
 * Exercice N°7
    Quels résultats fournit le programme suivant?
*/

int main()
{
    int n, p, q;
    n = 5; p = 2;
    q = n++ > p || p++ != 3;
    cout << "A : n = " << n << " p = " << p << " q = " << q << "\n";    // A: n=6 ; p=2 ; q=1

    n = 5; p = 2;
    q = n++ < p || p++ != 3;
    cout << "B : n = " << n << " p = " << p << " q = " << q << "\n";    // B: n=6 ; p=3 ; q=1

    n = 5; p = 2;
    q = ++n == 3 && ++p == 3;
    cout << "C : n = " << n << " p = " << p << " q = " << q << "\n";    // C: n=6 ; p=2 ; q=0

    n = 5; p = 2;
    q = ++n == 6 && ++p == 3;
    cout << "D : n = " << n << " p = " << p << " q = " << q << "\n";    // D: n=6 ; p=3 ; q=1

    return 0;
}
