#include <iostream>

using namespace std;

int najdi(int broj, int cifra) {
    if (broj == 0) { return 0; }
    if (broj % 10 == cifra) { return 1 + najdi(broj / 10, cifra); }
    return najdi(broj / 10, cifra);
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cout<<najdi(a[i], a[i] % 10)<<" ";
    }
    return 0;
}