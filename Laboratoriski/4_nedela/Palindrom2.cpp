#include <iostream>

using namespace std;

int main() {
    int a, b, tmpI, cifra, max = 0;
    cin >> a >> b;
    int min = b - 1;
    for (int i = a; i <= b; i++) {
        tmpI = i;
        int obrI = 0;
        while (tmpI) {
            cifra = tmpI % 10;
            obrI = obrI * 10 + cifra;
            tmpI /= 10;
        }
        if (obrI == i) {
            if (i < min) { min = i; }
            if (i > max) { max = i; }
        }
    }
    cout << "Smallest Palindromic Number: " << min << endl;
    cout << "Largest Palindromic Number: " << max << endl;
    return 0;
}
