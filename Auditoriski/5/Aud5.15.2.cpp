#include <iostream>
using namespace std;

int main() {
    int ocena, suma = 0, broceni = 0, padnal = 0;
    while (cin >> ocena) {
        switch (ocena) {
            case 6:
            case 7:
            case 8:
            case 9:
            case 10: suma += ocena;
                broceni++; break;
            case 5:  padnal++; break;
            default: cout << "vnesi ocena od 5 do 10 : "; break;
        }
    }

    if (broceni == 0)
        cout << "Nema polozeni ispiti";
    else
        cout << "Prosekot e " << static_cast<float>(suma) / broceni << endl;
    if (padnal != 0)
        cout << "Padnal na " << padnal << " ispiti" << endl;
    else
        cout << "Ne padnal na ispit" << endl;
    return 0;
}