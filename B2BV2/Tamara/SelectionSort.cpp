#include <iostream>

using namespace std;

void SelectionSort(int a[], int n) {
    int tmp, minI, br = 0, brSwap = 0;
    for (int i = 0; i < n - 1; ++i) {
        minI = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[minI]) {
                minI = j;
            }
        }
        tmp = a[i];
        a[i] = a[minI];
        a[minI] = tmp;
    }
}

int main() {
    int tmp, n = 6;
    int a[] = {2, 5, 1, 0, 7, 2};
    SelectionSort(a, n);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}