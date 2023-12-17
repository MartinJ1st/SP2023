#include <iostream>

using namespace std;

int main() {
    int m, n, vkupno = 0;
    cin >> m >> n;
    int matrica[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrica[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        int kecovi = 0;
        for (int j = 0; j < n; j++) {
            kecovi += matrica[i][j];
            if (kecovi > 2) {
                vkupno++;
                break;
            }
            if (matrica[i][j] == 0) { kecovi = 0; }
        }

    }
    for (int j = 0; j < n; j++) {
        int kecovi = 0;
        for (int i = 0; i < m; i++) {
            kecovi += matrica[i][j];
            if (kecovi > 2) {
                vkupno++;
                break;
            }
            if (matrica[i][j] == 0) kecovi = 0;
        }
    }
    cout << vkupno;

    return 0;
}