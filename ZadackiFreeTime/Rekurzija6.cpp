// Да се напише рекурзивна функција за наоѓање на НЗД на два броја а и b, каде a > b.
// Потсетник: За наоѓање на НЗД може да се користи Евклидовиот алгоритам.

#include <iostream>

using namespace std;

int NZD(int a, int b) {
    if (a == 0) return b;
    return NZD(b % a, a);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << NZD(a, b);
    return 0;
}