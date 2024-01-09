#include <iostream>

using namespace std;

int transformNumber(int broj) {
    if (broj == 0) {
        return 0;
    }
    int cifra = broj % 10;

    if (cifra % 2 != 0) {
        cifra -= 1;
    } else {
        cifra = 0;
    }
    int remainingDigits = transformNumber(broj / 10);
    return remainingDigits * 10 + cifra;
}

int main() {
    int inputNumber;
    cin >> inputNumber;

    int transformedNumber = transformNumber(inputNumber);

    cout << "Brojot e " << transformedNumber;

    return 0;
}
