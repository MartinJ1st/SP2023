//Да се напише функција што ќе ја одредува должината на една текстуална низа.
//
//Да се даде итеративно и рекурзивно решение.
//
//Пример
//
//Ако на функцијата како аргумент и се предаде стрингот
//
//zdravo!
//
//тогаш таа треба да врати: 7

#include <iostream>

using namespace std;

int length(char s[]) {
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
        len++;
    if (s[len - 1] == '\n')
        len--;
    return len;
}

int length_r(char *s) {
    if (*s == '\0')
        return 0;
    return 1 + length_r(s + 1);
}

int main() {
    int MAX = 100;
    char s[MAX];
    cin.getline(s,MAX);
    cout << "Dolzhina: " << length(s) << " i " << length_r(s);
    return 0;
}