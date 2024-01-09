//30 od zadaci od labs
#include <iostream>

using namespace std;

int reverseNumber(int n) {
    int tmp = n, obr = 0, cifra;
    while (tmp) {
        cifra = tmp % 10;
        obr = obr * 10 + cifra;
        tmp /= 10;
    }
    return obr;
}


bool isPalindrome(int n) {
    if (n == reverseNumber(n)) { return 1; }
    else
        return 0;
}

bool containsDigits(int n) {
    if (n == 0) { return 1; }
    if ((n % 10) < 5) { return containsDigits(n / 10); }
    else
        return 0;
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if (isPalindrome(i) && containsDigits(i)) {
            cout << i << endl;
        }
    }
    return 0;
}