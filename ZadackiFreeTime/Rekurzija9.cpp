// Напишете целосно рекурзивна функција triagolnik(n)
// што за даден влезен аргумент n ќе испечати на екран триаголник од броевите од 1 до n.
// Дополнителни функции се дозволени, но истите мора да се исто така рекурзивни.
// Не е дозволено користење на циклуси!

#include <iostream>

using namespace std;

void linija(int broj, int brojac) {
    if (broj == brojac) return;
    cout << brojac++<<" ";
    linija(broj, brojac);
}

void triagolnik(int broj, int brojac) {
    if (broj == brojac) return;
    linija(++brojac, 0);
    cout << endl;
    triagolnik(broj, brojac);
}

int main() {
    int n;
    cin >> n;
    triagolnik(n, 0);
    return 0;
}