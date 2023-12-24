#include <iostream>

using namespace std;

int main() {
    int m, n, a[100][100], max, min;
    float b[100][100];
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        min = 1;
        min <<= 10;
        max = 0;
        for (int j = 0; j < n; ++j) {
            if (a[j][i] < min) {
                min = a[j][i];
            }
            if (a[j][i] > max) {
                max = a[j][i];
            }
        }
        for (int j = 0; j < n; ++j)
        {
            b[i][j] = (float)(a[j][i] - min) / (max - min);
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%.2f ",b[j][i]);
        }
        cout << endl;
    }


    return 0;
}