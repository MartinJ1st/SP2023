#include <iostream>
#include <climits>

using namespace std;

int main() {
    int a[100][100], n, min_val, tmp;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        min_val = INT_MAX;

        if (i % 2 == 0) {
            for (int j = 0; j < n; ++j) {
                if (a[i][j] < min_val) {
                    min_val = a[i][j];
                }
            }
            tmp = min_val;
        }
        if (i % 2 != 0) {
            for (int j = 0; j < n; ++j) {
                a[i][j] += tmp;
            }
            tmp=0;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
