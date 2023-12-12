#include <iostream>

using namespace std;

int sumaNaCifri(int broj) {
    int zbir = 0, tmp = broj;
    while (tmp) {
        zbir += tmp % 10;
        tmp /= 10;
    }
    return zbir;
}

int obratenBroj(int broj) {
    int tmp = sumaNaCifri(broj);
    int obr = 0;
    while (tmp) {
        int cifra = tmp % 10;
        obr = obr * 10 + cifra;
        tmp /= 10;
    }
    return obr;
}

void pecatiVoInterval(int a, int b) {
    for (int i = a; i <= b; i++) {
        int rev = obratenBroj(i);
        if (i % rev == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    pecatiVoInterval(a, b);
    return 0;
}