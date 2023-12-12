//Да се напише програма за ротирање на елементите на една низа за m местa во десно. На крај, да се испечати на екран ротираната низа. Елементите од низата и бројот на ротирања се читаат од стандарден влез.
#include<iostream>

using namespace std;

int main() {
    int n, temp, m;
    int a[100];
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int j = 0; j < (m%n); j++) {
        temp = a[n - 1];
        for (int i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}