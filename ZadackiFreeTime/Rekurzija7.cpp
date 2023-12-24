// Дефинирајте ја рекурзивната функција "sumOfDigits(int number)" така што за дадениот аргумент
// "number" ќе ја пресмета сумата на сите негови цифри.
// Пример за аргумент "1234" функцијата треба да врати 1 + 2 + 3 + 4 = 10.

#include <iostream>

using namespace std;

int sumOfDigits(int number) {
    if (number < 10) { return number; }
    return number % 10 + sumOfDigits(number / 10);
}

int main() {
    int n, broj, zbir1 = 0, zbir = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> broj;
        zbir1 = sumOfDigits(broj);
        zbir += zbir1;
        cout << zbir1 << endl;
    }
    cout << zbir;
    return 0;
}