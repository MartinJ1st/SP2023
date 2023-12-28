#include <iostream>

using namespace std;

void premesti(int a[], int n) {
    int tmp, br = 0;
    for (int i = 0; i < n - br; ++i) {
        if (a[i] < 0) {
            br++;
            tmp = a[i];
            for (int j = i; j < n - 1; ++j) {
                a[j] = a[j + 1];
            }
            a[n - 1] = tmp;
            i--;
        }
    }

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
    premesti(a, n);
    return 0;
}