//Да се напише програма која ќе ја отпечати поднизата на дадена текстуална низа (што се внесува од тастатура) определена
// со позицијата и должината, што како параметри се внесуваат од тастатура. Поднизата започнува од знакот што се наоѓа
// на соодветната позиција во текстуалната низа, броејќи од лево.
//
//Пример
//
//Ако од тастатура се внесе:
//
//banana
//
//позиција: 2
//
//должина: 4
//
//тогаш програмата треба да отпечати: nana

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[100];
    int pozicija, dolzhina;
    cin.getline(s, 100);
    cin >> pozicija >> dolzhina;
    if (pozicija >= strlen(s)) {
        cout << "Nevalidna pozicija" << endl;
    } else if (pozicija + dolzhina > strlen(s)) {
        dolzhina = strlen(s - pozicija);
    }

    for (int i = pozicija; i < (pozicija + dolzhina); ++i) {
        cout << s[i];
    }
    return 0;
}
