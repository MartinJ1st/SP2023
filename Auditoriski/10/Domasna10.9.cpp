
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


int main() {
    char a[100];
    cin.getline(a, 100);

    cout << e_palindrom(a) << endl;
    return 0;
}