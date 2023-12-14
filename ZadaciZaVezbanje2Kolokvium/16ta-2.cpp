#include <iostream>

using namespace std;

int max(int broj) {
    if (broj < 10) {
        return broj;
    }

    int cifra = broj % 10;
    int maxOstatok = max(broj / 10);
    if (cifra > maxOstatok) {
        return cifra;
    } else {
        return maxOstatok;
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << max(n) << endl;
    }

    return 0;
}