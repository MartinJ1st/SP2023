//Да се напише програма што ќе го пресмета просекот на еден студент, како и бројот на испити на што студентот паднал.
// Бројот на испити кои студентот ги полагал не е познат.

#include <iostream>
using namespace std;

int main() {
    int ocena, suma = 0, broceni = 0, padnal = 0;
    while (cin >> ocena) {
        while (ocena < 5 || ocena > 10) {
            cout << "vnesi ocena od 5 do 10 : ";
            if (!(cin >> ocena)) break;
        }
        /* presmetuvanje */
        if (ocena >= 6 && ocena <= 10) {
            suma += ocena;
            broceni++;
        }
        else /*if (ocena == 5) */
            padnal++;
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