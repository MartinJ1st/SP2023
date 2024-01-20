#include <iostream>

using namespace std;

int f(int broj, int cifra) {
    int br = 1, tmp = broj, brojac = 0;
    while (tmp) {
        if (br % 2 == 0) {
            if (tmp % 10 == cifra) { brojac++; }
        }
        br++;
        tmp /= 10;
    }

    return brojac;
}

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (f(a, c) >= f(b, c)) {
            cout << a<<endl;
        } else {
            cout << b<<endl;
        }
    }
    return 0;
}