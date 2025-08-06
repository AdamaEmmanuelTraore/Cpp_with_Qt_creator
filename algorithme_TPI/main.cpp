#include <iostream>
#include <vector>

using namespace std;

/*
    Exemple de tri par insertion en C++.
*/

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];                   // élément à insérer
        int j = i - 1;

        // déplacer les éléments plus grands que "key" vers la droite
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;                   // insérer l'élément à la bonne position
    }
}

int main()
{
    vector<int> arr = {12, 11, 13, 5, 6};

    cout << "Tableau avant le tri : ";
    for (int val : arr)
        cout << val << " ";
    cout << endl;

    insertionSort(arr);
    cout << "tableau après le tri : ";
    for (int val : arr)
        cout << val << " ";
    cout << endl;

    /*
     * encore plus simple et optimisé avec la methode "sort".
        vector<int> arr = {12, 11, 13, 5, 6};
        sort(arr.begin(), arr.end());                   // tri rapide et optimisé
        for (int v : arr) cout << v << " ";
    */

    return 0;
}
