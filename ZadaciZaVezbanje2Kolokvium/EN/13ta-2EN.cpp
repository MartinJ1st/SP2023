#include <iostream>

using namespace std;

int main() {
    int n;
    long a[100][100], max = 1, min = 1;
    min <<= 20;
    max <<= 20;
    max *= -1;
    cin >> n;
    if (n < 2) { return 0; }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            if (i < j) {
                if (a[i][j] > max) { max = a[i][j]; }
            }
            if (i > j) {
                if (a[i][j] < min) { min = a[i][j]; }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i < j) {
                a[i][j] = max;
            }
            if (i > j) {
                a[i][j] = min;
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}