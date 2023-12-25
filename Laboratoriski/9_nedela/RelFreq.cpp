#include <iostream>
#include <cstring>

#define MAX 1000

using namespace std;

void letterFrequency(char a[], char bukva) {
    int brojacM = 0, brojacG = 0;
    char mal = tolower(bukva);
    char golem = toupper(bukva);
    for (int i = 0; i < strlen(a); ++i) {
        if (bukva == golem && a[i] == bukva) {
            brojacG++;
            bukva = tolower(bukva);
        }
        if (bukva == mal && a[i] == bukva) {
            brojacM++;
            bukva = toupper(bukva);
        }

    }
    cout << (brojacM / (float) strlen(a)) * 100.0 << endl;
    cout << ((brojacG / (float) strlen(a))) * 100.0 << endl;
}

int main() {
    char a[MAX], bukva;
    cin.getline(a, MAX);
    cin >> bukva;
    letterFrequency(a, bukva);
    return 0;
}