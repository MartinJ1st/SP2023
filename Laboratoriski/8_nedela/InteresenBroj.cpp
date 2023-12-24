#include <iostream>

using namespace std;

int isInteresting(int number) {
    int tmp = number;
    bool flag = false;

    while (tmp) {
        if (tmp < 10) { break; }
        int lastDigit = tmp % 10;
        int secondLastDigit = (tmp / 10) % 10;
        if (((lastDigit % 2 == 0) && (secondLastDigit % 2 != 0)) ||
            ((lastDigit % 2 != 0) && (secondLastDigit % 2 == 0))) {
            flag = true;
            tmp = tmp / 10;
        } else {
            return 0;
        }
    }
    if (flag) { return 1; }
    else return 0;
}

void print(int niza[], int i) {
    if (i == -1) {
        return;
    }
    if (isInteresting(niza[i])) {
        cout << niza[i] << endl;
    }
    print(niza, i - 1);
}

int main() {
    int a[100], n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    print(a, n - 1);// Start with the last index
    return 0;
}


