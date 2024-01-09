#include <iostream>

using namespace std;

int najgolemaCifra(int broj) {
    if (broj == 0) {
        return 0;
    }

    int cifra = broj % 10;
    int ostatok = najgolemaCifra(broj / 10);

    if (cifra % 2 != 0 && cifra > ostatok) {
        return cifra;
    }

    return ostatok;
}

void opsegNeparni(int a, int b) {
    for (int i = a; i <= b; ++i) {
        int najgolema = najgolemaCifra(i);
        cout << i << " -> ";
        if (najgolema != 0) {
            cout << najgolema;
        } else {
            cout << 0;
        }
        cout << endl;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    opsegNeparni(a, b);

    return 0;
}
