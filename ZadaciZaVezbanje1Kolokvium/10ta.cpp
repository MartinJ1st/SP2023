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

int main() {

    int n, copy;
    int pred_digit, current_digit, br=1;
    bool t = false;
    while(cin>>n)
    {
        copy = n;
        pred_digit = n % 10;
        n/=10;
        if(copy < 10)
        {
            continue;
        }
        current_digit = n % 10;
        if (pred_digit > current_digit)
            br = 0;
        else
            br=1;
        while(n!=0)
        {
            current_digit = n % 10;

            if(br % 2 == 0) {
                if (pred_digit > current_digit) {
                    pred_digit = current_digit;
                    t = true;
                } else {
                    t = false;
                    break;
                }
            }
            else if(br % 2 != 0)
            {
                if (pred_digit < current_digit) {
                    pred_digit = current_digit;
                    t = true;
                } else {
                    t = false;
                    break;
                }
            }
            n/=10;
            br++;

        }
        if(t == 1)
        {
            cout<<copy<<endl;
        }
        br = 0;
    }


    return 0;
}