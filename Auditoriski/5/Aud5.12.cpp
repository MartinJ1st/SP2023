//Switch примери

#include <iostream>
using namespace std;

int main() {
    char odgovor;
    cout << "Dali SP e lesen predmet? (d/n): ";
    cin >> odgovor;

    switch (odgovor) {
        case 'D':
        case 'd': cout << "I jas mislam taka!\n";
            break;
        case 'N':
        case 'n': cout << "Navistina?\n";
            break;
        default:
            cout << "Ova e DA ili NE?\n";
    }

    return 0;
}