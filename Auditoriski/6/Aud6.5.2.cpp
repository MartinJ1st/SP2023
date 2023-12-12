#include <iostream>

using namespace std;

bool prost_broj(int x) {
    if (x == 1) { return 0; }
    else if (x == 2) { return 1; }
    else {
        for (int i = 2; i <= (x / 2); i++) {
            if (x % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int n, temp;
    cin >> n;
    temp = n + 1;
    while (!(prost_broj(temp))) { temp++; }
    cout << temp - n;
    return 0;
}