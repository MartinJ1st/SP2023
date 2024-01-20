#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 3) {
        cout << "Obidete se povtrono";
        return 0;
    } else {
        int matrica[n][n], Matrix[] = {0, 0, 0, 0};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << matrica[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i < n / 2 && j < n / 2) Matrix[0] += matrica[i][j];
                if (i < n / 2 && j > n / 2) Matrix[1] += matrica[i][j];
                if (i > n / 2 && j < n / 2) Matrix[2] += matrica[i][j];
                if (i > n / 2 && j > n / 2) Matrix[3] += matrica[i][j];
            }
        }

        for (int i = 0; i < 4; i++) {
            cout << Matrix[i];
            if (i == 1)cout << endl;
        }
    }
    return 0;
}