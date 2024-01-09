//Од стандарден влез се чита низa од букви, не подолга од 80 знаци (само букви, без празни места). На стандарден излез
// треба да се отпечатат назабените поднизи подолги од 6 букви, секоја во посебен ред. Назабена подниза е подниза
// којашто е составена наизменично од мали и големи букви, односно големи и мали букви. Почеток на низата претставува
// првата промена мала-голема или голема-мала буква, а завршува со последната промена.

#include<iostream>
#include<cctype>

using namespace std;


int zab(char *a) {
    char *s = a;
    while (*(s + 1) && ((isupper(*s) && islower(*(s + 1))) || (islower(*s) && isupper(*(s + 1)))))
        s++;
    return s + 1 - a;
}

void printsub(char *s, int l) {
    while (l--)
        cout << *s++;
    cout << endl;
}

int main() {
    int i = 0, l;
    const int lineLen = 81;
    const int minLen = 6;
    char a[lineLen];
    cin.getline(a, lineLen);
    while (a[i] && a[i + 1]) {
        l = zab(a + i);
        if (l > minLen)
            printsub(a + i, l);
        i += l;
    }
    return 0;
}

//int main() {
//int i = 0;
//char s[lineLen], *a = s;
//cin.getline(a, lineLen);
//while (*a && *(a + 1)) {
//int l = zab(a);
//if (l > minLen)
//printsub(a, l);
//a += l;
//}
//return 0;
//}