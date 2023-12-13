#include <iostream>
#include <cmath>
#define MAX 100
using namespace std;

// Од стандарден влез се чита цел број n.
// Потоа се вчитуваат n низи од цели броеви, при што за секоја прво се внесува должината на низата, а потоа сите елементи на низата,
// па на крај бројот k.
// Да се напише програма која за секоја низа ќе ја трансформира истата,
// т.ш. секој k-ти елемент прво ќе го помножи со неговиот реден број во низата,
// потоа ќе го одземе неговиот следбеник.
// Доколку к-тиот елемент нема следбеник, се собира со неговиот претходник.

// На пример, ако е дадена следната низа:
//      1 2 3 4 5 6 7 8, за k=2 се добива
//      1 1 3 11 5 29 7 71

// Да се испечатат сите трансформирани низи

int main ()
{
    int N;
    cin >> N;
    int arr[MAX];

    for (int i = 0; i < N; i++)
    {
        int newN;           // Dolzina na nizata.
        cin >> newN;
        for (int j = 0; j < newN; j++)
        {
            cin >> arr[j];
        }

        int k;
        cin >> k;

        for (int j = 0; j < newN; j++)
        {
            if ((j + 1) % k == 0)
            {
                if (j + 1 < newN)
                {
                    arr[j] = arr[j] * (j + 1) - arr[j + 1];
                }
                else
                {
                    arr[j] = arr[j] + arr[j - 1];
                }
            }
        }

        for (int j = 0; j < newN; j++)
        {
            cout << arr[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}