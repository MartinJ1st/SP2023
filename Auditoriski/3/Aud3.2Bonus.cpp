#include <iostream>
using namespace std;

//Бонус: Направете проверка дали знакот е цифра

int main()
{
    char ch;
    int rez;
    cout << "Vnesete znak: ";
    cin >> ch;
    rez = (ch >= '0') && (ch <= '9');
    cout << rez;
    return 0;
}