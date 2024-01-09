#include <iostream>

using namespace std;

void sort(int &a, int &b, int &c) {
    int tmp;
    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a < c) {
        tmp = a;
        a = c;
        c = tmp;
    }
    if (b < c) {
        tmp = b;
        b = c;
        c = tmp;
    }
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;
    sort(a, b, c);

    cout << a << " " << b << " " << c;
    return 0;
}
