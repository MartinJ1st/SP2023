/*1.5. Задача 4
Да се напише програма што на екран ќе ги испечати сите четири-цифрени броеви кај кои збирот на трите најмалку значајни цифри е еднаков со најзначајната цифра.

4031 (4=0+3+1), 5131 (5=1+3+1)
*/

#include <iostream>
using namespace std;

int main() {
    int i, n, sum, first_digit, digit;
    i = 1000;
    while (i <= 9999) {
        first_digit = i / 1000;
        n = i % 1000;
        sum = 0;
        while (n > 0) {
            digit = n % 10;
            sum += digit;
            n /= 10;
        }
        if (sum == first_digit) cout << i << "\t";
        i++;
    }
    return 0;
}