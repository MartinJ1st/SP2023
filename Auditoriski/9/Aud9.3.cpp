//Да се напише програма која за даден природен број ја пресметува разликата помеѓу најблискиот поголем од него
// прост број и самиот тој број.
//Програмата треба да користи рекурзивна функција за наоѓање на соодветниот прост број, која пак треба да користи
// рекурзивна функција за проверка дали даден број е прост број.
//Пример:
//
//Ако се внесе 573, програмата треба да испечати 577 - 573 = 4

#include <iostream>

using namespace std;

int is_prime(int n, int i);

int first_larger_prime(int n);

int main() {
    int number, difference;
    cin >> number;

    difference = first_larger_prime(number) - number;

    cout << first_larger_prime(number) << " - " << number << " = " << difference << endl;

    return 0;
}

int is_prime(int n, int i) {
    if (n < 4)
        return 1;
    else if ((n % 2) == 0)
        return 0;
    else if (n % i == 0)
        return 0;
    else if (i * i > n)
        return 1;
    else
        return is_prime(n, i + 2);
}

int first_larger_prime(int n) {
    if (is_prime(n + 1, 3))
        return n + 1;
    else
        return first_larger_prime(n + 1);
}