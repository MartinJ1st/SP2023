#include <iostream>

using namespace std;

int AbsolutnaFunkcija(int br1, int br2, int br3) {
    return abs(br1 - br2) + abs(br2 - br3);
}

int main() {
    int a, b, c, n, minX=1;
    cin >> n;
    minX<<=10;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        int br = AbsolutnaFunkcija(a, b, c);
        if (minX > br)
            minX = br;
    }
    cout << minX;
    return 0;
}