#include <iostream>

using namespace std;

int main() {
    int N, a[100];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        if (i != 0 && (i-1) % 2 == 0) {
            a[i] = a[i] + a[i - 1];
        }
    }
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    return 0;
}