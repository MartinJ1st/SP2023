/*
 Да се напише програма што ќе претставува едноставен калкулатор. Во програмата се вчитуваат два броја и оператор во формат:

broj1 operator broj2
По извршената операција во зависност од операторот, се печати резултатот во формат:

broj1 operator broj2 = rezultat
 */

#include <iostream>
using namespace std;

int main() {
    double broj1, broj2, rezultat;
    char op;

    cout << "Внесете два броја и оператор (пр. 5 + 3): ";
    cin >> broj1 >> op>> broj2;

    switch (op) {
            case '+':
            rezultat = broj1 + broj2;
            break;
            case '-':
            rezultat = broj1 - broj2;
            break;
            case '*':
            rezultat = broj1 * broj2;
            break;
            case '/':
            if (broj2 != 0) {
                rezultat = broj1 / broj2;
            } else {
                cout << "Делење со 0 не е дозволено." << endl;
                return 1;
            }
            break;
            default:
            cout << "Непознат оператор." << endl;
            return 1;
    }

        cout << broj1 << ' ' << op << ' ' << broj2 << " = " << rezultat << endl;

    return 0;
}