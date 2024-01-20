#include <iostream>

using namespace std;

int main() {
    int m,n, a[100][100] = {0},b[100][100] = {0};
    cin >> m>>n;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
             b[i][j] = 0;
            if (a[i - 1][j] > 0) {
               b[i][j] += a[i - 1][j];
            }
            if (a[i + 1][j] > 0) {
                b[i][j] += a[i + 1][j];
            }
            if (a[i][j - 1] > 0) {
                b[i][j] += a[i][j - 1];
            }
            if (a[i][j + 1] > 0) {
                b[i][j] += a[i][j + 1];
            }
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}