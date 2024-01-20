#include <iostream>

using namespace std;

int main() {
    char a, pretC = '0';
    while (true) {
        cin >> noskipws>>a;
        if (a == '.') {
            cout << pretC << a;
            break;
        }
        if (pretC == a) {
            pretC = pretC - ('a' - 'A');
        }
        if (pretC != 0) {
            cout << pretC;
            pretC = a;
        }
    }
    return 0;
}