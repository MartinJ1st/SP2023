//Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека едната е помала од 5, а другата е поголема или еднаква на 5.
// На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:
//
//a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5
//
//Пр.  508294, 2638, 81
//Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат).
// Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.

#include <iostream>

using namespace std;

int main() {

    int n, copy;
    int pred_digit, current_digit, counter = 0;
    bool t = false;
    while (cin >> n) {
        if (n < 10) {
            continue;
        }
        copy = n;
        current_digit = n % 10;
        n /= 10;
        if (current_digit < 5)
            counter = 1;
        else
            counter = 0;

        while (n != 0) {
            current_digit = n % 10;

            if (counter % 2 == 0) {
                if (current_digit < 5) {

                    t = true;
                } else {
                    t = false;
                    break;
                }
            } else if (counter % 2 != 0) {
                if (current_digit >= 5) {

                    t = true;
                } else {
                    t = false;
                    break;
                }
            }
            n /= 10;
            counter++;

        }
        if (t == 1) {
            cout << copy << endl;
        }
        counter = 0;
    }


    return 0;
}