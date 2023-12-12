//Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една во однос на друга.
// На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
//
//a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
//
//Пр. 343, 4624, 6231209
//Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). Читањето завршува во
// моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.

#include <iostream>

using namespace std;

bool cikcak(int n) {
    if (n <= 99) {
        if (n % 10 != n / 10 % 10) {
            return true;
        }
    }

    while (n > 99) {
        int pos, predPos, predPredPos; //123

        pos = n % 10;  //a
        predPos = n / 10 % 10;  //b
        predPredPos = n / 100 % 10;  //c

        //a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e

        if ((pos > predPos && predPos < predPredPos)
            || (pos < predPos && predPos > predPredPos)) {
            n = n / 10;
        } else {
            return false;
        }
        return true;
    }
}

int main() {
    int n;
    while (cin >> n) {
        if (n <= 9) {
            continue;
        }

        if (cikcak(n)) {
            cout << n << endl;
        }
    }
    return 0;
}
