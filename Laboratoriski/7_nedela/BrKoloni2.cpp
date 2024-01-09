#include <iostream>

using namespace std;

int main() {
    int m, n, a[100][100], b[100][100], br = 0;
    bool flag;
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> b[i][j];
        }
    }
    for (int k = 0; k < n; ++k) {
        for (int j = 0; j < n; ++j) {
            flag = true;
            for (int i = 0; i < m; ++i) {
                if (a[i][k] != b[i][j]) {
                    flag = false;
                }
            }
            if (flag) {
                br++;
            }
        }
    }
    cout << br;
    return 0;
}