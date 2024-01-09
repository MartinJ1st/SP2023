#include <iostream>

using namespace std;

void transform(int a[], int n) {
    int max = 0, min = 1, pozMax, pozMin;
    min <<= 10;
    for (int i = 0; i < n; ++i) {
        if (a[i] > max) {
            max = a[i];
            pozMax = i;
        }
        if (a[i] < min) {
            min = a[i];
            pozMin = i;
        }
    }
    a[pozMax]=min;
    a[pozMin]=max;
    for (int i = 0; i < n; ++i) {
        if (i != pozMin && i != pozMax) {
            a[i] += (max - min);
        }
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