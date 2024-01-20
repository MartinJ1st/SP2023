#include <iostream>

using namespace std;

int main() {
    int m, n, matrica[100][100], x, y;
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrica[i][j];
        }
    }
    cin >> x >> y;
    if (matrica[x][y] == 0) {
        for (int a = x-1; a >= 0; a--) {
            if (matrica[a][y] == 1) { break; }
            matrica[a][y] = 1;
        }
        for (int a = x+1; a < m; a++) {
            if (matrica[a][y] == 1) { break; }
            matrica[a][y] = 1;
        }
        for (int a = y-1; a >= 0; a--) {
            if (matrica[x][a] == 1) { break; }
            matrica[x][a] = 1;
        }
        for (int a = y+1; a < n; a++) {
            if (matrica[x][a] == 1) { break; }
            matrica[x][a] = 1;
        }
        matrica[x][y]=1;

    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}