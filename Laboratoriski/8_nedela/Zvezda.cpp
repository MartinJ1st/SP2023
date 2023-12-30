#include <iostream>

using namespace std;

void Zvezda(int n) {
    if (n == 0)return;
    for (int i = 0; i < n; ++i) {
        cout << '*';
    }
    cout << endl;
    return Zvezda(n - 1);
}

int main() {
    int n;
    cin >> n;
    Zvezda(n);
    return 0;
}

