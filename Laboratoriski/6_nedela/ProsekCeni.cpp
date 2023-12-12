#include <iostream>

using namespace std;

int main() {
    int n, zbir = 0, br = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        zbir += a[i];
        br++;
    }
    double prosek = (float) zbir / br;
    for (int i = 0; i < n; i++) {
        if (a[i] >=prosek) { a[i] = 1; }
        else { a[i] = 0; }
    }
    cout << prosek << endl;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}