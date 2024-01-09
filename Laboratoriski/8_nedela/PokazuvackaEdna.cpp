#include <iostream>

using namespace std;

void promena(int *p, int n) {
    int *d = p;
    p++;
    for (int i = 1; i < n; i++, p++, d++) {
        *(p) += *d;
    }
}

void pecatenje(int *p, int n) {
    for (int i = 0; i < n; i++)
        cout << (*p++) << " ";
}

int main() {
    int n, niza[100];
    cin >> n;
    int *pok = niza;
    for (int i = 0; i < n; i++) {
        cin >> *(pok + i);
    }
    cout << "Vnesenata niza e: \n";
    pecatenje(niza, n);

    promena(niza, n);

    cout << "\nNovata niza e: \n";
    pecatenje(niza, n);

    return 0;
}