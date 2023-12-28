#include <iostream>

using namespace std;

int main() {
    int n, m, a[120][120];
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    int indexCmp, br;
    for (int j = 0; j < m; ++j) {
        br = 0;
        for (int i = 0; i < n; ++i) {
            if (j < 10) { indexCmp = (i * 10) + j; }
            else if (j < 100) { indexCmp = (i * 100) + j; }
            else indexCmp = (i * 1000) + j;
            if (a[i][j] == indexCmp)
                br++;
        }
        cout << br << endl;
    }
    return 0;
}