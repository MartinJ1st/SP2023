//Од стандарден влез се читаат знаци се додека не се прочита извичник. Во вака внесениот текст се скриени цели броеви (помали од 100).
// Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
//
//Напомена: cin во C++ ги игнорира празните места (space). За да не ги игнорира потребно е да се додаде noskipws пред
// читањето на знакот (пр. cin >> noskipws >> znak;)

#include <iostream>

using namespace std;

int main() {
    char znak;
    int zbirSkrieniBroevi = 0;
    int broj = 0;
    bool daliEBroj = false;

    cin >> noskipws;
    while (cin >>znak) {
        if(znak=='!'){
            break;
        }
        if (znak >= '0' && znak <= '9') {
            broj = broj * 10 + (znak - '0');
            daliEBroj = true;
        } else {
            if (daliEBroj) {
                zbirSkrieniBroevi += broj;
                broj = 0;
                daliEBroj = false;
            }
        }
    }

    if (daliEBroj) {
        zbirSkrieniBroevi += broj;
    }

    cout << zbirSkrieniBroevi << endl;

    return 0;
}
