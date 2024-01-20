#include <iostream>

using namespace std;

int main() {
    int m, n, a[100][100], zbir;
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int krajI = 1, krajJ;
    for (int k = 1; k < m; ++k) {
        zbir = 0;
        krajJ = 0;
        for (int i = 0; i <= krajI; ++i) {
            zbir += a[i][krajJ];
        }
        for (int i = 1; i <= krajI; ++i) {
            zbir += a[i][i];
            krajJ++;
        }
        for (int i = 0; i < krajI; ++i) {
            zbir += a[i][krajJ];
        }
        cout << zbir << endl;
        krajI++;
    }
    return 0;
}
