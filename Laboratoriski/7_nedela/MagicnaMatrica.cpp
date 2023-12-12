#include <iostream>

using namespace std;

int main() {
    int a[100][100], b[100], c[100], n, zbir;
    bool flag;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        zbir = 0;
        for (int j = 0; j < n; ++j) {
            zbir += a[i][j];
        }
        b[i] = zbir;
    }

    for (int j = 0; j < n; ++j) {
        zbir = 0;
        for (int i = 0; i < n; ++i) {
            zbir += a[i][j];
        }
        c[j] = zbir;
    }

    for (int k = 0; k < n - 1; ++k) {
        if (b[k] != b[k + 1] || c[k] != c[k + 1] || b[k] != c[k]) {
            {
                break;
            }
        } else {
            flag = true;
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    a[i][i] = zbir;
                    a[i][n - 1 - i] = zbir;
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }n
        }
        if (flag) {
            break;
        }
    }
    return 0;
}