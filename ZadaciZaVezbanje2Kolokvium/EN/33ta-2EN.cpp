#include <iostream>

using namespace std;

int main() {
    int n, ind = 0;
    float a[100][100], niza[300];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            if (i == 0 && j < n - 1) {
                niza[ind] = a[i][j];
                ind++;
            }

            if (i + j == n-1) {
                niza[ind] = a[i][j];
                ind++;
            }
            if (i == n - 1 && j > 0) {
                niza[ind] = a[i][j];
                ind++;
            }
        }
    }
    for (int i = 0; i < ind; ++i) {
        cout << niza[i] << " ";
    }
    cout<<endl;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}