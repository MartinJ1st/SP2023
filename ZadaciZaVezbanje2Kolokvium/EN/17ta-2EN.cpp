#include <iostream>
#include <cstring>

using namespace std;

bool eSamoglaska(char a) {
    switch (tolower(a)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': {
            return true;
        }
        default:
            return false;
    }
}

int main() {
    int n;
    char a[400];
    cin >> n;
    cin.ignore();
    cin.getline(a, 400);

    for (int i = 0; i < strlen(a); ++i) {
        if (eSamoglaska(a[i])) {
            for (int j = 1; j < n; ++j) {
                cout << a[i];
            }
        }
        cout << a[i];
    }
    return 0;
}