#include <iostream>
#include <cctype>

using namespace std;

void printTransformedWord(const char word[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << word[i];
    }
    cout << endl;
}

int main() {

    char a[80];

    while (cin.getline(a, 80)) {
        char b[80];
        int j = 0;
        for (int i = 0; a[i] != '\0'; ++i) {
            if (isalpha(a[i])) {
                b[j] = a[i];
                j++;
            } else if (isspace(a[i])) {
                b[j] = '\0';
                printTransformedWord(b, j);
                j = 0;
            }
        }

        if (j > 0) {
            b[j] = '\0'; // Null-terminate the word
            printTransformedWord(b, j);
        }
    }

    return 0;
}
