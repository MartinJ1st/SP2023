#include <iostream>

using namespace std;

int main() {
    int n, a[100][100], b[100], y;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            if (i == j) {
                b[i] = a[i][j];
            }
        }
    }
    cin >> y;
    for (int i = 0; i < n; ++i) {
        a[i][i] = a[i][y];
        a[i][y] = b[i];
        a[y][i] = b[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
