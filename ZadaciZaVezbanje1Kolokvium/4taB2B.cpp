//Од стандарден влез се читаат знаци се додека не се прочита извичник. Во вака внесениот текст се скриени цели броеви (помали од 100).
// Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
//
//Напомена: cin во C++ ги игнорира празните места (space). За да не ги игнорира потребно е да се додаде noskipws пред
// читањето на знакот (пр. cin >> noskipws >> znak;)

#include <iostream>

using namespace std;

int main() {
    int suma = 0, vrednost = 0;
    char znak;
    string flag = "ednocifren";
    //int flag = 1; //1 kje bide ednocifren broj
    //bool flag = true; //true kje bide ednocifren broj

    while (cin >> noskipws >> znak) {
        if (znak == '!') break;

        if (flag == "ednocifren" && znak >= '0' && znak <= '9') {
            vrednost = znak - '0';
            flag = "dvocifren";
        } else if (flag == "dvocifren" && znak >= '0' && znak <= '9') {
            vrednost = (vrednost * 10) + znak - '0';

        } else if (!(znak >= '0' && znak <= '9')) {
            suma += vrednost;
            vrednost = 0;
            flag = "ednocifren";
        }
    }
    suma += vrednost;
    cout << suma;

    return 0;
}