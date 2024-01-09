#include <iostream>
#include <cstring>

using namespace std;

void cleanString(char *str) {
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
}

int countConjunctions(char *str) {
    int bukvi = 0;
    int dolzina = 0;
    int svrznici = 0;
    while (*str) {
        if (isalpha(*str)) {
            bukvi = 1;
            ++dolzina;
        } else {
            if (dolzina <= 3 && dolzina > 0) {
                ++svrznici;
            }
            dolzina = 0;
            bukvi = 0;
        }
        str++;
    }
    if (dolzina <= 3 && bukvi) {
        ++svrznici;
    }
    return svrznici;
}

int main() {
    char line[100];
    int maxSvrznici = 0;
    char najgolemaRecenica[100];
    int first = 1;
    while (cin.getline(line, sizeof(line))) {
        if (first) {
            strcpy(najgolemaRecenica, line);
            first = 0;
        }

        cleanString(line);
        // puts(line);
        int conjunctions = countConjunctions(line);
        if (conjunctions > maxSvrznici) {
            strcpy(najgolemaRecenica, line);
            maxSvrznici = conjunctions;
        }
    }

    cout << maxSvrznici << ": " << najgolemaRecenica;
    return 0;
}