#include<iostream>

using namespace std;

int main() {
    int n, temp, m;
    int a[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    temp = a[n - 1];

    for (int i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = temp;


    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}