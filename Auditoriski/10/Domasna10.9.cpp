
#include <iostream>
#include <cstring>

using namespace std;

int e_palindrom(char a[]) {
    for (int i = 0, j = strlen(a) - 1; i < strlen(a); i++) {
        if (i == j) { break; }
        if (!isalpha(a[i])) {
            continue;
        }
        if (!(isalpha(a[j]))) {
            j--;
            i--;
            continue;
        }
        if (tolower(a[i]) != tolower(a[j])) {
            return 0;
        }
        j--;
    }
    return 1;
}

int e_palindrom_rek(char a[], int n) {
    if (n < 0) {
        return 1;
    }
    if (!isalpha(a[n])) {
        return e_palindrom_rek(a, n - 1);
    }
    if (!isalpha(*a)) {
        return e_palindrom_rek(a + 1, n - 1);
    }
    if (tolower(*a) != tolower(a[n])) {
        return 0;
    }
    return e_palindrom_rek(a + 1, n - 2);
}

int main() {
    char a[100];
    cin.getline(a, 100);

    cout << e_palindrom(a) << endl;
    cout<<e_palindrom_rek(a, strlen(a)-1);
    return 0;
}