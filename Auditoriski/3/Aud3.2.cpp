#include <iostream>
using namespace std;

/* Да се напише програма која чита знак од тастатура и во зависнот од тоа дали е мала или голема буква печати 1 или 0, соодветно.
ПОМОШ: Користете логички и релациски оператори за тестирање на ASCII вредноста на знакот.*/

int main()
{
    char ch;
    int rez;
    cout << "Vnesete znak: ";
    cin >> ch;
    rez = (ch >= 'a') && (ch <= 'z');
    cout << rez;
    return 0;
}