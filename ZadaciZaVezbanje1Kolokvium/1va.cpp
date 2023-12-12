//Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
// Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
// да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.

#include <iostream>

using namespace std;

int main() {

    int m, n;
    cin >> m >> n;

    int min = 0;
    int cifra, temp;
    for (int i = m; i <= n; i++) {
        temp = i;
        while (temp != 0) {
            cifra = temp % 10;
            if (cifra % 2 != 0) {
                break;
            } else {
                temp /= 10;
                if (temp == 0) {
                    if (min == 0 || min > i) {
                        min = i;
                    }
                }
            }
        }
    }
    if (min == 0) {
        cout << "NE";
    } else {
        cout << min;
    }


    return 0;
}