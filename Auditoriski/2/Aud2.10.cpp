#include <iostream>
using namespace std;

//Да се напише програма која чита голема буква од стандарден влез и ја печати истата како мала буква. - Напомена: Секој знак се претставува со ASCII број.

int main() {
    char c;
    cout << "Vnesete golema bukva: " << endl;
    cin >> c;
    cout << c << "malo se pishuva " << char (c + ('a' - 'A')) << endl;
    return 0;
}