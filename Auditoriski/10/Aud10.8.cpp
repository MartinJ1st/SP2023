//Да се напише функција која во дадена текстуална низа ќе ги отстранува празните места на почетокот и крајот од низата.
//
//Пример
//
//За низата:
//
//"   make trim   "
//треба да се добие:
//
//"make trim"

#include <iostream>
#include <cstring>

using namespace std;

//void trim(char s[]) {
//    int spaces = 0;
//    while (isspace(s[spaces])) {
//        spaces++;
//    }
//    int i;
//    for (i = 0; s[i + spaces] != '\0'; i++) {
//        s[i] = s[i + spaces];
//    }
//    s[i] = '\0';
//    while (i > 0 && isspace(s[i - 1])) {
//        i--;
//        s[i] = '\0';
//    }
//}

void filter(char a[]) {
    for (int i = strlen(a) - 1; i >= 0; i--) {
        if (isspace(a[i])) {
            a[i] = '\0';
        } else {
            break;
        }
    }
    for (int i = 0; i < strlen(a); i++) {
        if (isspace(a[i])) {
            for (int j = 0; j < strlen(a); ++j) {
                a[j] = a[j + 1];
            }
            i--;
        } else {
            break;
        }
    }
    for (int i = 0; i < strlen(a); ++i) {
        cout<<a[i];
    }
}


int main() {
    int MAX = 100;
    char s[MAX];
    cin.getline(s, MAX);
    filter(s);
    return 0;
}