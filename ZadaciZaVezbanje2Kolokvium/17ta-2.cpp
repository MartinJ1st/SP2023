#include <iostream>
using namespace std;

int main() {
    int n;
    float a[100][100], b[100][100] = {0}, zx = 0, zy = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                zx += a[i][j];
            } else if (i + j >= n - 1) {
                zy += a[i][j];
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                a[i][i] = zx + zy;
            }
            a[i][i] = zx;
            a[i][n - 1 - j] = zy;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}