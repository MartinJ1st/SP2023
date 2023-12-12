/* Да се напише програма каде од тастатура ќе се внесе датумот на раѓање во формат (ddmmgggg). Програмата на компјутерскиот екран ќе го испечати денот и месецот на раѓање.

Пример: Ако се внесе следниот број: 18091992, програмата ќе испечати: 18.9
ПОМОШ: Искористете целобројно делење и остаток од делење.*/

#include <iostream>
using namespace std;

int main()
{
    long int datum;
    int den, mesec;
    cout << "Vnesete datum na ragjanje: ";
    cin >> datum;
    den = datum / 1000000;
    mesec = (datum / 10000) % 100;
    cout << "Vashata data na ragjanje e " << den << "." <<mesec;
    return 0;
}