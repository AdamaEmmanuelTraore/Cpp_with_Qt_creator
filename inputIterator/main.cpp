/*
    ITERATEUR: Unidirectionnel
*/

#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    istream_iterator<int> it(cin);
    int val = *it;  // lecture uniquement

    return 0;
}
