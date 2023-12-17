#include <iostream>

using namespace std;

int poramnet(int a) {
    if (a == 0) return 0;
    int ostatok = a % 10;
    if (ostatok == 9) ostatok = 7;
    return ostatok + 10 * poramnet(a / 10);
}

int maksNizaPoz(int niza[]) {
    int maks = -1, poz = 0;
    for (int i = 0; i < 5; i++) {
        if (niza[i] > maks) {
            maks = niza[i];
            poz = i;
        }
    }
    return poz;
}

void sort(int *niza) {
    while (true) {
        int sorted = 1;
        for (int i = 0; i < 4; i++) {
            if (*(niza + i) > *(niza + i + 1)) {
                int temp = *(niza + i);
                *(niza + i) = *(niza + i + 1);
                *(niza + i + 1) = temp;
                sorted = 0;
            }
        }
        if (sorted == 1) break;
    }
}

int main() {
    int broj, brojac = 0;
    int niza[] = {0, 0, 0, 0, 0};
    while (cin >> broj) {
        int prm = poramnet(broj);
        if (brojac < 5) {
            for (int i = 0; i < 5; i++) {
                if (niza[i] == 0) {
                    niza[i] = prm;
                    brojac++;
                    break;
                }
            }
        } else {
            if (prm < niza[maksNizaPoz(niza)]) niza[maksNizaPoz(niza)] = prm;
        }
    }
    sort(niza);
    for (int i = 0; i < 5; i++) {
        if (niza[i] != 0) {
            cout << niza[i] << " ";
        }
    }
    return 0;
}