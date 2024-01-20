#include <iostream>

using namespace std;

int parcom(int a) {
    if (a == 0) {
        return 0;
    }

    int digit = a % 10;
    if (digit % 2 == 0) {
        return parcom(a / 10) * 10 + (digit + 1);
    } else {
        return parcom(a / 10) * 10 + (digit - 1);
    }
}

int main() {
    int numbers[100], num, count = -1, brojac = 0;
    while (cin >> num) {
        count++;
        numbers[count] = parcom(num);
    }

    for (int i = 0; i < count; ++i) {
        for (int j = i + 1; j < count; ++j) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; ++i) {
        cout << numbers[i] << " ";
        brojac++;
        if (brojac == 5) { return 0; }
    }
}