#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Vnesete eden priroden broj: ";
    cin >> n;
    double rezultat = pow(n, 3);

    cout << "Kubot na brojot " << n << " e " << rezultat << endl;
    return 0;
}