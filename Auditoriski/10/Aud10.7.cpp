//Да се напише функција која во стринг што и се предава како влезен параметар ќе ги промени малите букви во големи и обратно, и ќе ги отстрани сите цифри и специјални знаци.
//
//Пример
//
//За низата:
//
//0v@ePr1m3R
//
//треба да се добие:
//
//VEpRMr

#include <iostream>
#include <cstring>

using namespace std;

void filter(char a[]) {
//    int i = 0, j = 0;
//    while (a[i] != '\0') {
//        if (isalpha(a[i])) {
//            if (islower(a[i]))
//                a[j] = toupper(a[i]);
//            else if (isupper(a[i]))
//                a[j] = tolower(a[i]);
//            j++;
//        }
//        i++;
//    }
//    a[j] = '\0';
    int br = 0;
    for (int i = 0; i < strlen(a); ++i) {
        if (isalpha(a[i])) {
            br++;
            if (islower(a[i]))
                a[i] = toupper(a[i]);
            else
                a[i] = tolower(a[i]);
        } else {
            for (int j = i; j < strlen(a); ++j) {
                a[j] = a[j + 1];
            }
            i--;
        }
    }
    for (int j = 0; j < strlen(a); ++j) {
        cout << a[j];
    }
}

int main() {
    int MAX = 100;
    char s[MAX];
    cin.getline(s, MAX);
    filter(s);
    return 0;
}