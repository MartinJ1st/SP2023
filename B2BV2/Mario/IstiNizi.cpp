#include <iostream>

using namespace std;

bool Proveri(int b1, int b2, int a[], int b[]) {
    if (b1 != b2) {
        return false;
    }
    for (int i = 0; i < b1; ++i) {
        if (a[i] != b[i]) { return false; }
    }
    return true;
}

int main() {
    int n, m, a[100], b[100];
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    if (Proveri(n, m, a, b)) {
        cout << "Se Isti";
    } else {
        cout << "Ne se";
    }
    return 0;
}