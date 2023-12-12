#include <iostream>

using namespace std;

int reverse(int number) {
    int ObratenBroj = 0;
    while (number) {
        int digit = number % 10;
        ObratenBroj = ObratenBroj * 10 + digit;
        number /= 10;
    }
    return ObratenBroj;
}

bool isPalindrom(int number) {
    if (number == reverse(number)) { return true; }
    else { return false; }
}

int findLargest(int start, int end) {
    int max = 0;
    for (int i = start; i <= end; i++) {
        if (isPalindrom(i)) {
            if (max < i) {
                max = i;
            }
        }
    }
    return max;
}

int main() {
    int Opseg1, Opseg2;
    cin >> Opseg1 >> Opseg2;
    cout << "Largest Palindromic Number: " << findLargest(Opseg1, Opseg2);
    return 0;
}