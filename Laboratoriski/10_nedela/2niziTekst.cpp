#include <iostream>
#include <cstring>

using namespace std;

bool postoi(const char a[], char target) {
    for (int i = 0; i < strlen(a); ++i) {
        if (a[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    char a[80], b[80], c[80];

    cin.getline(a, 80);

    cin.ignore();

    cin.getline(b, 80);

    for (int i = 0; i < strlen(a); ++i) {
        if (a[i] == b[i]) {
            c[i] = '=';
        } else if (postoi(b, a[i])) {
            c[i] = '+';
        } else {
            c[i] = '-';
        }
    }
    for (int i = 0; i < strlen(a); ++i) {
        cout << c[i];
    }
    return 0;
}