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

int cikCakDva(int n) {
    int pos, predPos, predPredPos, flag = 1;
    if (n > 10 && n <= 99) { // if uslov za dvocifreni broevi
        pos = n % 10;
        predPos = n / 10 % 10;

        if ((pos < 5 && predPos >= 5) || (pos >= 5 && predPos < 5)) {
            return flag;
        } else {
            flag = 0;
            return flag;
        }
    }
    //a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5

    while (n > 99) {
        pos = n % 10; //a
        predPos = n / 10 % 10; //b
        predPredPos = n / 100 % 10; //c     // 646 6>5     4<=5     6 >5

        if ((pos < 5 && predPos >= 5 && predPredPos < 5) ||
            (pos >= 5 && predPos < 5 && predPredPos >= 5)) {
            n = n / 10;
        } else {
            flag = 0;
            return flag;
        }
        return flag;
    }
}

int main() {
    int n;
    while (cin >> n) {
        if (n <= 10) {
            continue;
        }
        if (cikCakDva(n)) {
            cout << n << endl;
        }
    }
    return 0;
}
