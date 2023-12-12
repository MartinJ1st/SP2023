#include <iostream>

using namespace std;

int main() {
    int n, a, tmp, zc = 0, max = 0, maxN;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a < 100 || a > 999) { break; }
        else {
            tmp = a;
            while (tmp) {
                zc += tmp % 10;
                tmp /= 10;
            }
            if (zc > max) {
                max = zc;
                maxN = a;
            }
        }
    }
    cout << maxN;
    return 0;
}