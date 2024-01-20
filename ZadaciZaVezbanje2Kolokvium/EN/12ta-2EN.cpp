#include <iostream>

using namespace std;

void shiftaj(int a[], int n) {
    int neNultInd = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] != 0) {
            a[neNultInd] = a[i];
            neNultInd++;
        }
    }
    while (neNultInd < n) {
        a[neNultInd] = 0;
        neNultInd++;
    }
}

void transform(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == a[i + 1]) {
            a[i] *= 2;
            a[i + 1] = 0;
            i++;
        }
    }
    shiftaj(a, n);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    transform(a, n);
    return 0;
}
