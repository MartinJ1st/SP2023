#include <iostream>

using namespace std;


int isRastecka(int a[], int n) {

    if (n == 1) { return a[n] > a[n - 1]; }
    if (a[n] > a[n - 1]) {
        return isRastecka(a, n - 1);
    }
    return 0;
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << isRastecka(a, n - 1);
}