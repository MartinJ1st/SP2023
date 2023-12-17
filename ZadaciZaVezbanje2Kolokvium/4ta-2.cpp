#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrica[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrica[i][j];
        }
    }
    int pozX, pozY;
    int k1 = 0, k2 = 0, k3 = 0, k4 = 0;
    cin >> pozX >> pozY;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < pozX) {
                if (j < pozY) k2 += matrica[i][j];
                else k1 += matrica[i][j];
            } else {
                if (j < pozY) k3 += matrica[i][j];
                else k4 += matrica[i][j];
            }
        }
    }
    cout << k1 << " " << k2 << " " << k3 << " " << k4;
    return 0;
}