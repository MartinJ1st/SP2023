// Напишете целосно рекурзивна функција triagolnik(n)
// што за даден влезен аргумент n ќе испечати на екран превртен триаголник од броевите од 1 до n,
// како во примерот подолу. Дополнителни функции се дозволени, но истите мора да се рекурзивни.
// Не е дозволено користење на циклуси!

#include <iostream>

using namespace std;

void linija(int broj, int brojac) {
    if (broj == brojac) return;
    cout<<brojac++<<" ";
    linija(broj, brojac);
}

void triagolnik(int broj) {
    if (broj == 0) return;
    linija(broj, 0);
    cout << endl;
    triagolnik(broj-1);
}

int main() {
    int n;
    cin >> n;
    triagolnik(n);
    return 0;
}
