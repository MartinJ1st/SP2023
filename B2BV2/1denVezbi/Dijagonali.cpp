#include <iostream>

using namespace std;

int main() {

    int n, a[100][100], zbir = 0, zbir1 = 0;
    cin >> n;
    if (n < 1) {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    zbir = a[0][0];
    for (int i = 1; i < n; ++i) {
        zbir += a[i][i];
        a[i][i] = zbir;
    }
    zbir1 = a[0][n - 1];
    for (int i = 1; i < n; ++i) {
        zbir1 += a[i][n - 1 - i];
        a[i][n - i - 1] = zbir1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
