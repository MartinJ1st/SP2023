#include <iostream>

using namespace std;

int main() {
    int broj, a[100], L = 0, R = 0, V = 0, i = 0, b = 0;
    bool I;
    while (true) {
        cin >> broj;
        if (broj >= 0) {
            a[i] = broj;
            i++;
        } else
            break;
    }
    while (true) {
        if (b == 3) { break; }
        cin >> L >> R >> V >> I;
        if (I) {
            for (int k = L + 1; k < R; ++k) {
                a[k] = V;
            }
        } else {
            for (int k = L; k <= R; ++k) {
                a[k] += V;
            }
        }
        b++;
    }
    for (int j = 0; j < i; ++j) {
        cout << a[j] << " ";
    }

    return 0;
}