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

    char a[80], c[80]; //+1 null terminator
    cin.getline(a, 80);
    for (int i = 0, j = 0; i <= strlen(a); ++i) {
        if (!isVowel(a[i])) {
            c[j] = a[i];
            j++;
        }
    }
    strcpy(a, c);

    cout << a << endl;

    return 0;
}