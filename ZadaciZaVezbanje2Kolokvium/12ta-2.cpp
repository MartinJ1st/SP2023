#include <iostream>

using namespace std;

int BrojPozitivni(int niza[], int n) {
    if (n == 0) {
        return 0;
    }
    return (niza[n - 1] > 0) + BrojPozitivni(niza, n - 1);
}


int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << BrojPozitivni(a, n);
    return 0;

}