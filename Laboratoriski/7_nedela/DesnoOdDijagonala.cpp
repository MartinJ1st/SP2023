#include <iostream>

using namespace std;

int main() {
    int n, a[100][100], zbir;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n-1; ++i) {
        zbir = 0;
        for (int j = i + 1; j < n; ++j) {
            zbir += a[i][j];
        }
        if (a[i][i] != zbir) {
            cout << -1;
            return 0;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}