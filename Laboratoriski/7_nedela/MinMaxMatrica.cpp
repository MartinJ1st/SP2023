#include <iostream>
#include <climits>

using namespace std;

int main() {
    int a[100][100], n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        int max_val = INT_MIN;
        int min_val = INT_MAX;

        for (int j = 0; j < n; ++j) {
            if (a[i][j] > max_val) {
                max_val = a[i][j];
            }
            if (a[i][j] < min_val) {
                min_val = a[i][j];
            }
        }

        for (int j = 0; j < n; ++j) {
            if (a[i][j] == max_val) {
                a[i][j] = 1;
            }
            if (a[i][j] == min_val) {
                a[i][j] = 0;
            }
            if(max_val==min_val){
                a[i][j]=0;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
