#include <iostream>

using namespace std;

void InsertionSort(int a[], int n) {
    cout << endl;
    int el, j,br=0;
    for (int i = 1; i < n; ++i) {
        el = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > el) {
            cout << j << endl;
            a[j + 1] = a[j];
            j--;
            br++;
        }
        a[j + 1] = el;
    }
    cout<<"*"<<br<< endl;
}

int main() {
    int n = 6;
    int a[] = {2, 5, 1, 0, 7, 2};
    InsertionSort(a, n);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}