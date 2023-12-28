#include <iostream>

using namespace std;

void transformiraj(int a[], int broj, int n) {
    if (broj > 0) {
        for (int i = n - 1; i >= 0; i--) {
            if (i - broj <= 0) {
                a[i] = a[i - broj];
                for (int j = 0; j < i; ++j) {
                    a[j] = 0;
                }
                break;
            } else a[i] = a[i - broj];
        }
    } else if (broj < 0) {
        for (int i = 0; i < n; ++i) {
            if (i + abs(broj) >= n) {
                for (int j = i; j < n; ++j) {
                    a[j] = 0;
                }
                break;
            }
            a[i] = a[i + abs(broj)];
        }
    }
}

int main() {
    bool flag;
    int m, n, a[100], br = 0;
    cin >> m;
    for (int k = 0; k < m; ++k) {
        flag = true;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        transformiraj(a, a[0], n);
        for (int i = 0; i < n; ++i) {
            if (a[i] != 0) {
                flag = false;
            }
            cout << a[i] << " ";
        }
        cout << endl;
        if (flag) { br++; }
    }
    cout << br;
    return 0;
}