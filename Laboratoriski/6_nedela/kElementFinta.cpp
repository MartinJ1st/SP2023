#include <iostream>

using namespace std;

int main() {
    int n, BrEl, k;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> BrEl;

        int a[BrEl];
        for (int j = 0; j < BrEl; ++j) {
            cin >> a[j];
        }

        cin >> k;

        for (int j = 1; j < BrEl; ++j) {
            if ((j + 1) % k == 0) {
                if (j + 1 < BrEl) {
                    a[j] = a[j] * (j + 1) - a[j + 1];
                } else {
                    a[j] = a[j] * (j + 1) + a[j - 1];
                }
            }
        }

        for (int j = 0; j < BrEl; ++j) {
            cout << a[j] << " ";
        }

        cout << endl;
    }

    return 0;
}
