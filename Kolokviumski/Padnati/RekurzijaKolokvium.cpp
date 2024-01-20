#include <iostream>

using namespace std;

void odzemi(int n, int r) {
    if (n+r<0) { return; }
    cout << n << " ";
    odzemi(n - r, r);
    if (n > 0) {
        cout << n << " ";
    }
}

int main() {
    int dx = 3, n; //drugata grupa dx=5;
    cin >> n;
    odzemi(n, dx);
    return 0;
}