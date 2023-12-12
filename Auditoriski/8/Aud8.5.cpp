#include <iostream>

using namespace std;

int main() {
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int pozicija, broj;
    cin >> pozicija >> broj;
    for (int i = n - 1; i >= pozicija; i--) {
        a[i + 1] = a[i];
    }
    a[pozicija] = broj;
    n++;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}