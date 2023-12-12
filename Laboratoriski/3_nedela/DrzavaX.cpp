#include <iostream>
using namespace std;

int main() {

    double procent0, prag1, procent1, prag2, procent2, iznos;
    cin >> procent0 >> prag1 >> procent1 >> prag2 >> procent2 >> iznos;

    double rezultat;

    if (iznos > prag2 + prag1) {

        rezultat = prag1 * (procent0 / 100);
        iznos -= prag1;

        rezultat += (prag2 - prag1) * (procent1 / 100);
        iznos -= (prag2 - prag1);
        rezultat += iznos * (procent2 / 100);
    } else if (iznos <= prag1) {
        rezultat = iznos * (procent0 / 100);

    } else if (iznos <= prag2) {

        rezultat = prag1 * (procent0 / 100);
        iznos -= prag1;

        rezultat += iznos * (procent1 / 100);
    }


    cout << rezultat;
    return 0;
}