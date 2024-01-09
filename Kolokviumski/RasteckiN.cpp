//Од тастатура се внесува цел број N. Да се напише програма која ќе го испечати првиот број поголем од N во кој цифрите
// се во растечки (опаѓачки) редослед.

#include<iostream>

using namespace std;

// returns true if digits in n are in increasing order
bool digitsIncrease(int n) {
    if (n < 10)
        return true;
    return (n % 10 > n / 10 % 10) && digitsIncrease(n / 10);
}

int main() {
    int n;
    cin >> n;
    while (!digitsIncrease(++n));
    cout << n << endl;
    return 0;
}