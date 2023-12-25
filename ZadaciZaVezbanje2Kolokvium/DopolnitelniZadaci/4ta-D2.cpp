#include <iostream>

using namespace std;

int main() {
    int m, n, r, k, a[100][100];
    cin >> m >> n >> r >> k;
    if (m <= 0 || m >= 30 || n <= 0 ||
        n >= 30 || r < 0 || r >= m || k < 0 || k >= n) {
        return 0;
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int min = a[0][0];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j <n; ++j) {
            if (i < r && j < k) { cout << min << " "; }
            else cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}