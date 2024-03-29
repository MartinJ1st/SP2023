//Да се напише програма која што за дадена низа од природни броеви (која што се внесува од тастатура) ќе го отпечати
// најголемиот заеднички делител (НЗД) на нејзините елементи. Програмата задолжително треба да содржи рекурзивна
// функција за пресметување НЗД на два природни броја.
//
//Пример
//
//48 36 120 72 84
//На екран треба да отпечати:
//
//NZD na elementite na ovaa niza e 12
//
//НЗД за два броја може да се пресмета со користење на Евклидовиот алгоритам
//За да се пресмета НЗД на броевите m и n, се пресметува остатокот при делење на m со n.
//ако остатокот не е 0, се пресметува остатокот при делење на n со m % n
//постапката се повторува се додека се добиваат ненулти остатоци
//ако остатокот е 0, НЗД на двата броја е последниот пресметан ненулти остаток
//Пример
//
//NZD(20, 12)
//20 % 12 = 8
//12 % 8 = 4
//8 % 4 = 0
//
//NZD(20, 12) = 4

#include <iostream>

using namespace std;

int NZD(int n, int m) {
    if (n % m == 0) {
        return m;
    }
    return NZD(n, n % m);
}

int main() {
    int i, n, a[100];

    cout << "Vnesi ja goleminata na nizata: ";
    cin >> n;

    cout << "Vnesi gi elementite na nizata: \n";
    for (i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int nzd = a[0];

    for (i = 1; i < n; ++i) {
        nzd = NZD(nzd, a[i]);
    }

    cout << "NZD na elementite od nizata e " << nzd;
    return 0;
}