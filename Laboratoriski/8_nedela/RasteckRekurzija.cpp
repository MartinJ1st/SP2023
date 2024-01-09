#include <iostream>

using namespace std;

int StrogoRastecka(int broj) {
    int tmp = broj, cifra, vtoraCifra, flag;
    while (tmp) {
        if (tmp < 10) { break; }
        cifra = tmp % 10;
        vtoraCifra = (tmp / 10) % 10;
        if (cifra > vtoraCifra) {
            flag = 1;
            tmp = tmp / 10;
        } else {
            return -1;
        }
    }
    if (flag) { return 1; }
    else return -1;
}

int ZbirCifri(int broj) {
    if (broj < 10) { return broj; }
    return broj % 10 + ZbirCifri(broj / 10);
}

int main() {
    int n, a[100], zbir;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (StrogoRastecka(a[i]) == 1) {
            zbir = ZbirCifri(a[i]);
            cout << a[i] << " (suma: " << zbir << ")" << endl;
        }
    }
    return 0;
}