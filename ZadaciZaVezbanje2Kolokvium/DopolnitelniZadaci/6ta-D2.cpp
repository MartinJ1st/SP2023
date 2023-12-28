#include <iostream>

using namespace std;

int par(int a[], int n) {
    bool flag = false;
    int brojce, br, min = 1;
    min <<= 10;
    for (int i = 0; i < n; ++i) {
        br=0;
        if (a[i] > 0) {
            brojce = a[i];
            a[i]=0;
            br++;

            for (int j = 1 + i; j < n; ++j) {
                if (a[j] == brojce) {
                    br++;
                    a[j] = 0;
                }
            }
            if (br % 2 == 0) {
                if (brojce < min) {
                    min = brojce;
                    flag = true;
                }
            }
        }
    }

    if (flag) { return min; }
    else return 0;
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int broj = par(a, n);
    if (broj)cout << "Najmaliot element koj se pojavuva paren broj pati e " << broj;
    else cout << "Nitu eden element ne se pojavuva paren broj pati!";
    return 0;
}