#include <iostream>

using namespace std;

char transformChar(char ch, int shift) {
    if ('a' <= ch && ch <= 'z') {
        return tolower((ch - 'a' + shift) % 26 + 'a');
    } else if ('A' <= ch && ch <= 'Z') {
        return tolower((ch - 'A' + shift) % 26 + 'A');
    } else {
        return tolower(ch);
    }
}

void transformString(char *str, int shift) {
    if (*str != '\0') {
        *str = transformChar(*str, shift);
        transformString(str + 1, shift);
    }
}

int main() {
    while (true) {
        char input[80];
        cin.getline(input, 80);
        if (input[0] == '\0') { return 0; }
        transformString(input, 3);
        cout << input << endl;
    }

    return 0;
}
