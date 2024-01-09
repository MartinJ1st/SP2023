#include <iostream>

using namespace std;

int divisibleByK(int number, int k) {
    if (number % k == 0) { return 1; }
    else return 0;
}

int nextDivisibleByK(int number, int k) {
    if (divisibleByK(number+1, k)) { return number+1; }
    return nextDivisibleByK(number + 1, k);
}

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    for (int i = a; i <= b; ++i) {
        cout << i << " -> " << nextDivisibleByK(i, k) << endl;
    }
}