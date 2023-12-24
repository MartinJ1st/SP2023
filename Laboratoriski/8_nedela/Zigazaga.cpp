#include <iostream>

using namespace std;

int cikcak(int number, int cifra) {
    if (number < 10) {
        return 1;
    }
    if ((number % 10 > cifra && number % 10 > number / 10 % 10) || (number % 10 < cifra && number % 10 < number / 10 % 10)) {
        return cikcak(number / 100, number / 10 % 10);
    }
    return 0;
}

//int cikcak(int num, int prev, int direction) {
//    if (num <= 10) {
//        return 1;
//    }
//
////    int curr = num % 10;
////    if (prev != -1) {
////        if (direction == 0 && curr >= prev) {
////            return 0;
////        } else if (direction == 1 && curr <= prev) {
////            return 0;
////        }
////    }
////
////    return cikcak(num / 10, curr, prev == -1 ? -1 : curr > prev ? 0 : 1);
//}

//num/10,num%10

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
//    if (cikcak(num, -1, -1))
    cout<<cikcak(num / 10, num % 10);
    return 0;
}