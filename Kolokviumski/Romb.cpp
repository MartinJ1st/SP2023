//Од стандарден влез се внесуваат димензиите на матрица (<100) а потоа и елементите (цели броеви) на матрицата по редици.
// Да се напише програма која ќе ги изброи сите ромбови во матрицата. Ромбовите се составени од четири идентични броеви
// кои се наоѓаат непосредно под, над, лево и десно од некој елемент на матрицата.
#include<iostream>

using namespace std;

int main() {
    int m, n, a[100][100];
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int rhomb = 0;
    for (int i = 1; i < m - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (a[i - 1][j] == a[i + 1][j] && // over / under
                a[i - 1][j] == a[i][j - 1] && // left
                a[i - 1][j] == a[i][j + 1]) // right
            {
                rhomb++;
            }
        }
    }
    cout << rhomb << endl;
    return 0;
}