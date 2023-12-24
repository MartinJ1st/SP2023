#include <iostream>

using namespace std;

int rek(int num) {
    if (num == 1) return 1;
    return num+rek(num - 1);
}

int main() {
    int n;
    cin >> n;
    cout << rek(n);
}