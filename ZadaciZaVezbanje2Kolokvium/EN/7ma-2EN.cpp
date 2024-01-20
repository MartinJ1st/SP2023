#include <iostream>

using namespace std;

int main() {
    int m, n, matrica[100][100], zbirG, zbirD;
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrica[i][j];
        }
    }
    for (int j = 0; j < n; ++j) {
        zbirG = 0, zbirD = 0;
        for (int i = m / 2; i < m; ++i) {
            zbirD += matrica[i][j];
        }
        if (m % 2 != 0) {
            for (int i = 0; i <= m / 2; ++i) {
                zbirG += matrica[i][j];
            }
            matrica[m/2][j]=abs(zbirG-zbirD);
        } else {
            for (int i = 0; i < m / 2; ++i) {
                zbirG += matrica[i][j];
            }
            matrica[m/2][j]=matrica[m/2-1][j]=abs(zbirG-zbirD);
        }
    }


    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}