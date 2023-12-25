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

    int n, k;
    cin >> n >> k;
    if (n < 1) {9
        cout << "-1";
        return 0;
    }
    int a[n], b[n], c[100];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    BubbleSort(a, n);
    BubbleSort(b, n);

    int b1 = 0, b2 = 0;
    for (int i = 0; i < 2 * n; ++i) {
        if (a[b1] <= b[b2]) {
            c[i] = a[b1];
            b1++;
        } else {
            c[i] = b[b2];
            b2++;
        }
        if (b2 > n) {
            for (int j = i; j < 2 * n; ++j) {
                c[j] = a[b1];
                b1++;
            }
            break;
        } else if (b1 > n) {
            for (int j = i; j < 2 * n; ++j) {
                c[j] = b[b2];
                b2++;
            }
        }
    }

    for (int i = 0; i < 2 * n; ++i) {
        if (c[i] != k) {
            cout << c[i] << " ";
        }
    }
    return 0;
}
