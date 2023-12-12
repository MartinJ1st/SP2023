//Да се напише програма за ротирање на елементите на една низа за едно место во десно. На крај, да се испечати на екран ротираната низа. Елементите од низата се читаат од стандарден влез.
//od levo da se resi zadacata
#include<iostream>

using namespace std;

int main() {
    int n, temp;
    int a[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    temp = a[n - 1];

    for (int i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }

    a[0] = temp;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}