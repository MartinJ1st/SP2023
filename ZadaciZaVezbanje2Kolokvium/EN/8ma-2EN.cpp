#include <iostream>

using namespace std;

int Odd(int a[], int n) {
    if (n < 0) { return 0; }
    if ((a[n - 1] % 10) % 2 != 0) { return 1 + Odd(a, n - 1); }
    else
        return Odd(a, n - 1);
}

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << Odd(a, n);
}