//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. Обратен број е бројот составен од
// истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број
// n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. Ако внесениот број не е валиден,
// да се отпечати соодветна порака (Brojot ne e validen).


#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    if (n <= 9) {
        cout << "Brojot ne e validen" << endl;
        return 1;
    }

    int interesenBroj = 0;
    for (int i = n-1; i >= 9; i--) {
        int brojac=0;
        int original = i;
        int obraten = 0;
        while (original > 0) {
            int digit = original % 10;
            brojac++;
            obraten = obraten * 10 + digit;
            original /= 10;
        }
        if (obraten % brojac == 0) {
            interesenBroj = i;
            break;
        }
    }

    if (interesenBroj != 0)
        cout << interesenBroj << endl;

    return 0;
}
