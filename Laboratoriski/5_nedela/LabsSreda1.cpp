#include<iostream>

using namespace std;

int countOccurence(int number, int digit) {
    int tmp = number, br = 0;
    while (tmp) {
        if (tmp % 10 == digit)
            br++;
        tmp /= 10;
    }
    return br;
}

int main() {
    int m, n, p;
    cin >> m >> n >> p;
    for (int i = m, limit = 1; limit <= 10; i++) {
        if (countOccurence(i, n) == p) {
            cout << i<<endl;
            limit++;
        }
    }
    return 0;
}