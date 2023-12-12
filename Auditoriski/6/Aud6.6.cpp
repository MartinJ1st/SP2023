/*Да се напише програма што ќе ги отпечати сите прости броеви
 * помали од 10000 чиј што  * збир на цифри е исто така прост
 * број. На крајот да се отпечати колку вакви броеви се пронајдени.
*/

#include <iostream>

using namespace std;

bool is_prime(int x) {
    if (x == 1) { return false; }
    else if (x == 2) { return true; }
    else {
        for (int i = 2; i <= (x / 2); i++) {
            if (x % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int sum_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;

    //if(x<10){return x;}
    //return x%10 +sum_digits(x/10);
}

int main() {
    int i, count = 0;
    for (i = 10; i <= 9999; ++i) {
        if (is_prime(i) && is_prime(sum_digits(i))) {
            cout << i << endl;
            count++;
        }
    }
    cout << "Vkupno: " << count << endl;
    return 0;
}