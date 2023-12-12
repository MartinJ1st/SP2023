#include <iostream>

using namespace std;

int main() {
    int n, a[100], k, tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (k-1 == i) {
            tmp = a[k];
            a[k] = a[i];
            a[i]=tmp;
            break;
        }
    }
    tmp=0;
    for (int i = n - 1; n >= 0; i--) {
        if ((n-k)==i) {
            tmp=a[n-k-1];
            a[n-k-1]=a[i];
            a[i]=tmp;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i]<<" ";
    }

    return 0;
}