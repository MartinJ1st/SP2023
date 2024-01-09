#include <iostream>
#include <cmath>

using namespace std;

bool PolnKvadrat(int num) {
    return floor(sqrt(num)) == sqrt(num);
}

int main() {
    int n, a[100][100];

    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    bool flag = true;

    for (int i = 0; i < n; ++i) {
        if (!PolnKvadrat(a[i][i] + a[i][n - 1 - i])) {
            flag = false;
            break;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
