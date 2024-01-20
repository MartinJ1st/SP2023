#include<iostream>
#include<cstring>

using namespace std;


bool isVowel(char letter) {
    switch (tolower(letter)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

int main() {

    char a[80], max[80];
    int n, maxOut = 0, brojac;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        cin.getline(a, 80);
        brojac = 0;
        for (int j = 0; j <= strlen(a); ++j) {
            if (!isVowel(a[j])) {
                brojac++;
            }
        }
        if (brojac > maxOut) {
            maxOut = brojac;
            strcpy(max, a);
        }

    }
    cout << max << endl;

    return 0;
}