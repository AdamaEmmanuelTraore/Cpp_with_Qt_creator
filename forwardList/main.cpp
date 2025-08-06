/*
    ITERATEUR: Forward list en C++
*/

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> fl = {1, 2, 3};
    auto it = fl.begin();
    cout<<"prima di auto-incrementarlo: "<<*it<<endl; // 1
    ++it;
    cout<<"dopo di auto-incrementarlo: "<<*it<<endl; // 2

    return 0;
}
