#include <iostream>

using namespace std;

int main() {
    bool flag1, flag2;
    int n, m, a[100][100], br;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        br = 0;
        for (int j = 0; j < m; ++j) {
            flag1 = (a[i][j] % 2 == 0);
            flag2 = ((i + j) % 2 == 0);
            if (flag1 == flag2) {
                br++;
            }
        }
        cout << i << ": " << br << endl;
    }
    return 0;
}