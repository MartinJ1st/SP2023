#include <iostream>

using namespace std;

int main() {
    int m, n, a[100][100], zb,indeks;
    float as, max, b[100];
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        max = 0;
        zb = 0;
        for (int j = 0; j < n; ++j) {
            zb += a[i][j];
        }
        as = (float) zb / (float) n;
        for (int j = 0; j < n; ++j) {
            float razlika = abs(a[i][j] - as);
            if (max < razlika) {
                max = razlika;
                indeks=j;
            }
        }
        b[i] = a[i][indeks];
    }

    for (int i = 0; i < m; ++i) {
        cout << b[i] << " ";
    }
    return 0;
}