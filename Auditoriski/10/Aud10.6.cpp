//Да се напише функција која за дадена текстуална низа ќе одредува дали таа е доволно сложена за да биде лозинка.
//
//Секоја лозинка мора да содржи барем една буква, барем една цифра и барем еден специјален знак.
//
//Пример
//
//zdr@v0! е валидна лозинка.
//
//zdravo не е валидна лозинка.


#include <iostream>
#include <cstring>

using namespace std;

int e_validna_lozinka(char str[]) {
    int bukvi = 0, cifri = 0, spec = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]))
            bukvi++;
        else if (isdigit(str[i]))
            cifri++;
        else
            spec++;
    }
    return (bukvi > 0 && cifri > 0 && spec > 0);
}


int main() {
    int MAX = 100;
    char s[MAX];
    fgets(s, MAX, stdin);
    int len = strlen(s);
    if (len && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    cout << s << " ";
    if (e_validna_lozinka(s))
        cout << "e validna lozinka.";
    else
        cout << "NE e validna lozinka.";
    return 0;
}