#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int max = 1, dolzina = 1;
    for (int i = 0; i < n; ++i) {
        if (dolzina > max) {
            max = dolzina;
            dolzina = 1;
        }
        for (int j = 1; j < n; j++) {
            if (a[i][j] > a[i][j - 1]) { dolzina++; }
            else {
                if (dolzina > max) {
                    max = dolzina;
                    dolzina = 1;
                }
            }
        }
    }
    cout << max;
    return 0;
}