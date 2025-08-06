/*
    ITERATEUR: OutputIterator, unidirectionnel
*/

#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    ostream_iterator<int> it(cout, " ");
    *it = 42;  // écrit 42

    return 0;
}
