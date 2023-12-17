#include <iostream>

using namespace std;

int main() {
    int n;
    float x = 0, y = 0, matrica[100][100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrica[i][j];
            if (i > j)
                x += matrica[i][j];
            if (i + j > n - 1)
                y += matrica[i][j];
            matrica[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) matrica[i][j] += x;
            if (i + j == n - 1) matrica[i][j] += y;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrica[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}