#include <iostream>

using namespace std;

void BubbleSort(int a[], int n) {
    int tmp, br = 0, brSwap = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (a[j] > a[j + 1]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                brSwap++;
            }
            br++;
        }
    }
    cout << br << endl;
    cout << brSwap << endl;
}

int main() {
    int tmp, n = 6;
    int a[] = {2, 5, 1, 0, 7, 2};
    BubbleSort(a, n);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}