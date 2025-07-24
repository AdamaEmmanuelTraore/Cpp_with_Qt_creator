#include <iostream>

using namespace std;

/*
 * Exercice N°6
    Quels résultats fournit le programme suivant?
*/

int main()
{
    int n = 10, p = 5, q = 10, r;
    r = n == (p = q);
    cout << "A: n = " << n << " p = " << p << " q = " << q                  // A: n=10; p=10; q=10 r=1
                      << " r = " << r <<  "\n";

    n = p = q = 5;
    n += p += q;
    cout << "B: n = " << n << " p = " << p << " q = " << q << "\n";         // B: n=15; p=10; q=5

    q = n < p ? n++ : p++;
    cout << "C: n = " << n << " p = " << p << " q = " << q << "\n";         // C: n=15; p=11; q=10

    q = n > p ? n++ : p++;
    cout << "D: n = " << n << " p = " << p << " q = " << q << "\n";         // D: n=16; p=11; p=15

    return 0;
}
