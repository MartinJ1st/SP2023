#include <iostream>

using namespace std;

bool ePalindrom(int n) {
    int cifra, tmp = n, obr = 0;
    while (tmp) {
        cifra = tmp % 10;
        obr = obr * 10 + cifra;
        tmp /= 10;
    }
    if (obr == n) { return true; }
    else return false;
}

int zbir(int n) {
    if (n == 0) { return 0; }
    return n % 10 + zbir(n / 10);
}

int cifri(int n) {
    if (n < 10) { return 1; }
    return 1 + cifri(n / 10);
}

int main() {
    int n;
    while (cin >> n) {
        if (ePalindrom(n)) {
            cout << zbir(n) << endl;
        } else {
            cout << cifri(n) << endl;
        }
    }
    return 0;
}
