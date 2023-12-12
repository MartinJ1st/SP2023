//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. Обратен број е бројот составен од
// истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број
// n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. Ако внесениот број не е валиден,
// да се отпечати соодветна порака (Brojot ne e validen).

#include <iostream>

using namespace std;

int main() {
    int n, interesen = 0;
    cin >> n;

    if (n < 10) {
        cout << "Brojot ne e validen";
    } else {
        for (int i = n - 1; i >= 10; i--) {
            int brojac = 0, obraten = 0;
            int tmp = i;
            while (tmp > 0) {
                obraten = (obraten * 10) + tmp % 10;
                brojac++;
                tmp = tmp / 10;
            }
            if (obraten % brojac == 0) {
                interesen = i;
                break;
            }
        }

    }
    if (interesen != 0) { cout << interesen; }
    return 0;
}