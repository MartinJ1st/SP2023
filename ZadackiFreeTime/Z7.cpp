#include <iostream>

using namespace std;

int Fibonaci(int broj) {
    if (broj <= 2) { return 1; }
    else {
        int a = 1, b = 1, c;
        for (int i = 3; i <= broj; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main() {
    int n;
    cin >> n;
    cout << Fibonaci(n);
    return 0;
}