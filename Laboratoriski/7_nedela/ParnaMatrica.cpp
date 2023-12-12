#include <iostream>

using namespace std;

int main() {
    int a[100][100], n,tmp,zb=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            if (a[i][j] % 2 == 0) {
                tmp = a[i][j];
                while (tmp) {
                    zb += a[i][j];
                    tmp /= 10;
                }
                a[i][j] = zb;
            }
        }
    }

    return 0;
}