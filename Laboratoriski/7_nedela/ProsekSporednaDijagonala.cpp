#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    float a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++) {
        float avg = 0.0;
        int count = 0, flag = 0;
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                flag = 1;
                avg /= (float) count;
            }
            if (flag == 0) {
                avg += a[i][j];
                ++count;
            }
            if (flag == 1 && a[i][j] < avg && i + j != n - 1) {
                a[i][j] = -1;
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
