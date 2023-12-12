//Да се напише рекурзивна функција која ќе го пресметува збирот на цифрите на еден број.

//sumDigits(126) -> 9
//sumDigits(49) -> 13
//sumDigits(12) -> 3

#include<iostream>
using namespace std;

int sumDigits(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sumDigits(n / 10);
}

//За даден број n, да се напише рекурзивна функција која ќе ги изброи појавувањата на цифрата 8. Притоа, доколку до
// некоја цифра 8 има уште една цифра 8 веднаш лево од неа, нејзиното појавување се брои двојно.

//count8(8) -> 1
//count8(818) -> 2
//count8(8818) -> 4

int count8(int n) {
    if (n == 0)
        return 0;
    if ((n / 10) % 10 == 8 && n % 10 == 8)
        return 2 + count8(n / 10);
    if (n % 10 == 8)
        return 1 + count8(n / 10);
    return count8(n / 10);
}