#include <iostream>

using namespace std;

int main() {
    int n, a[100][100];
    cin >> n;

    if (n % 2 != 0) {
        cout << "GRESKA" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            //1 nacin
            a[i][j] += a[i][n - 1 - j];
            a[i][j] += a[n - 1 - i][j];
            a[i][j] += a[n - 1 - i][n - 1 - j];

            //2 nacin
//            a[i][j] += a[i][n - 1 - j]+a[n-1-i][j]+a[n-1-i][n-1-j];
            cout<<a[i][j]<<" ";
        }
        cout << endl;
    }
}
