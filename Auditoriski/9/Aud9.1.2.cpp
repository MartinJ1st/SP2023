#include <iostream>

using namespace std;

int zbir(int n) {
    if (n == 1) { return 1; }
    return n + zbir(n - 1);
}

long int factoriel(int n) {
    if (n < 2) {
        return 1;
    }
    return n * factoriel(n - 1);
}

//int rekurz_suma(int n) {
//    if (n == 1) { return 1; }
//    return factoriel(zbir(n-1)) + rekurz_suma(zbir(n - 1));
//}

int main() {
    int n, f = 0;
    cin >> n;
    for (int i = 0; i <= n; ++i) {
        f += factoriel(zbir(n));
    }
    cout << f << endl;
//    cout << rekurz_suma(n);

}