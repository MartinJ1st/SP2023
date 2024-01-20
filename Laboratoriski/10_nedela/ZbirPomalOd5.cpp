#include<iostream>

using namespace std;

int sumOfDigits(int broj) {
    if (broj == 0) {
        return 0;
    }
    int cifra = broj % 10;
    if (cifra < 5) {
        return cifra + sumOfDigits(broj / 10);
    } else return sumOfDigits(broj / 10);
}

int main() {
    int n, br, max = 0, MaxBr, zbir;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> br;
        zbir = sumOfDigits(br);
        if (zbir > max) {
            max = zbir;
            MaxBr = br;
        }
    }
    cout << MaxBr;
    return 0;
}