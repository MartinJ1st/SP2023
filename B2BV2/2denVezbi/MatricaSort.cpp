#include <iostream>

using namespace std;

void BubbleSort(int a[], int n) {
    int tmp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (a[j] > a[j + 1]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int n, a[100][100], c[100][100], b[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    int k = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            b[k] = a[i][j];
            k++;
        }
    }
    BubbleSort(b, n*n);
    k = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            c[i][j] = b[k];
            cout << c[i][j] << " ";
            k++;
        }
        cout << endl;
    }

    return 0;
}