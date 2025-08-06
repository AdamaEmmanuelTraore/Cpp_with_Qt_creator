/*
    ITERATEUR: A accès direct
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};
    auto it = v.begin();                            // 10
    cout << it[2]<<endl;                            // 30
    it += 1;                                        // avance rapidement
    cout << "resultat final = "<<*it<< endl;        // 20

    return 0;
}
