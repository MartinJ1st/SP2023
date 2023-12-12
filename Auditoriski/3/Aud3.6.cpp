/* Да се напише програма каде од тастатура ќе се внесе трицифрен цел број. Програмата ќе ја испечати најзначајната и најмалку значајната цифра од бројот

Пример: Ако се внесе бројот 795, програмата ќе испечати: Najznacajna cifra e 7, a najmalku znacajna e 5.
ПОМОШ: Искористете целобројно делење и остаток од делење.*/
#include <iostream>
using namespace std;

int main()
{
    int broj;
    cout << "Vnesete go brojot: ";
    cin >> broj;
    cout << "Najznachajna cifra e " << (broj / 100);
    cout << ", a najmalku znachajna e " << (broj % 10);
    return 0;
}