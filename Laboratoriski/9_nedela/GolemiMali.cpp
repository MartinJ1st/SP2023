#include <iostream>
#include <cstring>

using namespace std;

void filter(char a[]) {
    for (int i = 0; i < strlen(a); ++i) {
        switch (a[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': {
                a[i] = toupper(a[i]);
                continue;
            }
            default:
                a[i] = tolower(a[i]);
        }
    }
}

int main() {
    char a[1000];
    cin.getline(a, 1000);
    filter(a);
    cout << a;
    return 0;
}