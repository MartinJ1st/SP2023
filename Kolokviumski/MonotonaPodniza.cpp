//Од стандарден влез се чита низa од букви, не подолга од 80 знаци (само букви, без празни места). На стандарден излез
// треба да се отпечатат монотонитеподнизи подолги од 6 букви, секоја во посебен ред. Монотона подниза е подниза којашто
// е составена или само од мали или само од големи букви.
#include<iostream>
#include<cctype>

using namespace std;

int LowerMono(char *a) {
    char *s = a;
    while (*(s + 1) && islower(*(s + 1)))
        s++;
    return s + 1 - a;
}

int UpperMono(char *a) {
    char *s = a;
    while (*(s + 1) && isupper(*(s + 1)))
        s++;
    return s + 1 - a;
}

void printsub(char s[], int l) {
    for (int m = 0; m < l; m++)
        cout << s[m];
    cout << endl;
}

int main() {
    int LINELEN = 81, MINLEN = 6;
    int i = 0;
    char a[LINELEN];
    cin.getline(a, LINELEN);
    while (a[i]) {
        int l;
        if (islower(a[i])) {
            l = LowerMono(a + i);
        } else {
            l = UpperMono(a + i);
        }
        if (l > MINLEN) {
            printsub(a + i, l);
        }
        i += l;
    }

    return 0;
}