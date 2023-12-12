#include <iostream>

using namespace std;

int main() {
    int a[100][100], n, zG = 0, zS = 0, Zk1 = 0, Zk2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (i == j) { zG += a[i][j]; }
            if (i == n - j - 1) { zS += a[i][j]; }
            if (j == 0) { Zk1 += a[i][j]; }
            if (j == n - 1) { Zk2 += a[i][j]; }
        }
    }

    cout << zG - zS << endl;
    cout << Zk1 - Zk2 << endl;
    return 0;
}