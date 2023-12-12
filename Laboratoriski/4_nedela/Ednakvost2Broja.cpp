#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    bool flag;
    int cifriA = 0, cifriB = 0;
    int temp = a;
    while (temp != 0) {
        cifriA++;
        temp /= 10;
    }
    temp = b;
    while (temp != 0) {
        cifriB++;
        temp /= 10;
    }
    if (cifriA % 2 == 1)
        a /= 10;
    if (cifriB % 2 == 0)
        b /= 10;


    while (a != 0) {
        bool daliENajdeno = false;
        flag = true;
        int cifra = a % 10;
        temp = b;
        while (temp != 0) {
            if (cifra == temp % 10) {
                daliENajdeno = true;
                break;
            }
            temp /= 100;
        }
        if (!daliENajdeno) {
            flag = false;
            break;
        }
        a /= 100;
    }
    if (flag)
        cout << "DA\n";
    else
        cout << "NE\n";

    return 0;
}


