//Да се напише програма која за дадена низа од цели броеви (која што се внесува од тастатура) ќе го отпечати
// најголемиот елемент. Програмата треба да содржи рекурзивна функција за наоѓање на најголем елемент во дадена низа.
//
//Пример: За низата
//
//5 8 3 12 9 6
//На екран треба да се отпечати:
//
//Najgolem element vo nizata e 12


#include <iostream>

using namespace std;

//int najgolemElement(const int a[], int n, int i, int max) {
//    if (i == n) {
//        return max;
//    } else {
//        if (a[i] > max) {
//            max = a[i];
//        }
//        return najgolemElement(a, n, i + 1, max);
//    }
//}

int najgolemElement(int a[], int n, int max) {
    if (n == 0)return max;
    if (a[n - 1] > max)return najgolemElement(a, n - 1, a[n - 1]);
    return najgolemElement(a, n - 1, max);
}

int main() {
    int n;
    cin >> n;

    int niza[n];
    for (int i = 0; i < n; ++i) {
        cin >> niza[i];
    }

//    cout << "Najgolem element vo nizata e " << najgolemElement(niza, n, 0, niza[0]);
    cout << "Najgolem element vo nizata e " << najgolemElement(niza, n, niza[0]);

    return 0;
}
