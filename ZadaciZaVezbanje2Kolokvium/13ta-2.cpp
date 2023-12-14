#include <iostream>

using namespace std;

int main() {
    int x, m, n, a[100][100], zbir;
    cin >> x >> m >> n;
    for (int i = 0; i < m; ++i) {
        zbir = 0;
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            zbir += a[i][j];
        }
        if (zbir > x) {
            for (int j = 0; j < n; ++j) {
                a[i][j] = 1;
            }
        } else if (zbir < x) {
            for (int j = 0; j < n; ++j) {
                a[i][j] = -1;
            }
        } else {
            for (int j = 0; j < n; ++j) {
                a[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}