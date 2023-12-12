#include <iostream>

using namespace std;

int main() {

    int zbir = 0, joker = 0;
    for (int i = 0;; i++) {
        int n;
        cin >> n;
        if (n > 90 || n < 1)
            break;
        if (i > 6)
            zbir += n;
        if (i < 7) {
            joker *= 10;
            joker += n % 10;
        }
    }
    cout << joker + zbir;
    return 0;
}