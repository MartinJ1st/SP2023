#include <iostream>
#include <cstring>

using namespace std;

bool Posledovatelen(const char a[], const char b[], int index) {
    if (a[index] == b[0]) {
        for (int i = 1; i < strlen(b); ++i) {
            if (a[i + index] != b[i]) { return false; }
        }
    }
    return true;
}


int posledovatelni(const char a[], const char target[]) {
    int brojac = 0;
    for (int i = 0; i < strlen(a); ++i) {
        if (Posledovatelen(a, target, i) && Posledovatelen(a, target, (i + strlen(target) - 1))) {
            brojac++;
        }
    }
    return brojac;
}

int main() {
    char a[20];
    cin.getline(a, 20);
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        char recenica[100];
        cin.getline(recenica, 100);
        cin.ignore();
        cout << posledovatelni(recenica, a) << endl;
    }
    return 0;
}