#include <iostream>

using namespace std;

int main() {
    int a[100][100], n, max=0, indeks;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < n; ++j) {
        int zbir = 0;
        for (int i = 0; i < n; ++i) {
            zbir += a[i][j];
        }

        if (max < zbir) {
            max = zbir;
            indeks = j;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == indeks) {
                a[i][j] = a[i][j] + max;
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}