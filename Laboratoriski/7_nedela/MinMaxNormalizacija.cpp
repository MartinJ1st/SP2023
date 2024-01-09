#include <iostream>

using namespace std;

int main() {
    int m, n;
    double a[100][100], max, min;
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%lf", &a[i][j]);
        }
    }

    for (int j = 0; j < n; ++j) {
        min = max = a[0][j];
        for (int i = 0; i < m; ++i) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
        for (int i = 0; i < m; ++i) {
            a[i][j] = (a[i][j] - min) / (max - min);
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%.2lf ", a[i][j]);
        }
        cout << endl;
    }


    return 0;
}