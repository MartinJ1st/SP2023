#include <iostream>

using namespace std;

int main() {
    int n, a[100][100] = {0};
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (a[i][j] < 0) {
                a[i][j] = a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1];
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}