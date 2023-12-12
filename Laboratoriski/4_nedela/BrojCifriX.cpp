#include <iostream>

using namespace std;

int main() {
    int x, a, bc = 0;
    cin >> x;
    int tmp = x;
    while (tmp > 0) {
        bc++;
        tmp /= 10;
    }
    while (cin >> a) {
        int tmpA = a;
        int bcA = 0;
        while (tmpA > 0) {
            bcA++;
            tmpA /= 10;
        }
        if (bcA == bc) {cout << a << endl;}
    }
    return 0;
}