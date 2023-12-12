/*Да се напише програма што ќе ги испечати сите броеви од зададен опсег кои се читаат исто и одлево надесно и оддесно налево.

пример броеви

12321 5061605

*/

#include <iostream>
using namespace std;

int main() {
    int i, from, to, temp, obraten, digit;
    cin >> from >> to;
    for (i = from; i <= to; i++) {
        temp = i;
        obraten = 0;
        while (temp > 0) {
            digit = temp % 10;
            obraten = obraten * 10 + digit;
            temp /= 10;
        }
        if (obraten == i)
            cout << i << "\t";
    }
    return 0;
}
