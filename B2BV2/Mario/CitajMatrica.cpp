#include <iostream>

using namespace std;

int main() {
    int n, a[50][50], glavna[50], sporedna[50];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int k = 0;
    int l = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";

            if (i == j) {
                glavna[k] = a[i][j];
                k++;
            }

            if (i + j == n - 1) {
                sporedna[l] = a[i][j];
                l++;
            }
        }
        cout << endl;
    }

    cout<<endl;
    for (int i = 0; i < k; ++i) {
        cout << glavna[i] << " ";
    }
    cout<<endl;
    for (int i = 0; i < k; ++i) {
        cout << sporedna[i] << " ";
    }

    return 0;
}
