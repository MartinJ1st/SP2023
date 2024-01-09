//Од тастатура се внесуваат еден цел позитивен број N и цифра D. Да се напише програма која ќе го испечати првиот број
// поголем од N во кој не се појавува цифрата D.

#include<iostream>

using namespace std;

// returns true if digit d appears in n
bool digitAppears(int n, int d) {
    if (n)
        return (n % 10 == d) || digitAppears(n / 10, d);
    return false;
}

int main() {
    int n, d;
    cin >> n >> d;
    while (digitAppears(++n, d));
    cout << n << endl;
    return 0;
}

// returns true if digit d does not appear in n
//bool digitNotAppear(int n, int d) {
//    if (n)
//        return (n % 10 != d) && digitNotAppear(n / 10, d);
//    return true;
//}
//
//int main() {
//    int n, d;
//    cin >> n >> d;
//    while (!digitNotAppear(++n, d));
//    cout << n << endl;
//    return 0;
//}