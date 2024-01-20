// Од стандарден влез се чита цел број К, по што се читаат N цели броеви.
// Да се напише програма која за секој прочитан број на стандарден излез
// ќе ги отпечати неговите цифри кои се поголеми од К, како и збирот на цифрите кои се отпечатени.
// Печатењето на цифрите поголеми од K да се реализира со посебна рекурзивна функција.

#include <iostream>

using namespace std;

int pecatiK(int broj, int k, int zbir) {
    if (broj < 10) {
        if (broj > k) {
            cout << broj<<endl;
            zbir += broj;
        }
        return zbir;
    }
    zbir = pecatiK(broj / 10, k, zbir);
    if (broj % 10 > k) {
        cout << broj % 10<<endl;
        zbir += broj % 10;
    }
    return zbir;
}

int main() {
    int k, n, broj;
    cin >> k >> n;
    for (int i = 0; i < n; ++i) {
        cin >> broj;
        cout << pecatiK(broj, k, 0)<<endl;
    }
    return 0;
}
