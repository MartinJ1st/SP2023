#include <iostream>

using namespace std;

void Nuli(int *niza, int n) {
    for (int i = 0; i < n; i++) {
        niza[i] = 0;
    }
}

int transform(int *niza, int n) {
    int prvEl = niza[0];
    if (abs(prvEl) >= n) {
        Nuli(niza, n);
        return 1;
    }

    if (prvEl >= 0) {
        for (int i = n - 1; i >= prvEl; i--) {
            niza[i] = niza[i - prvEl];
        }
        for (int i = 0; i < prvEl; i++) {
            niza[i] = 0;
        }
    } else {
        for (int i = 0; i < n - abs(prvEl); i++) {
            niza[i] = niza[i + abs(prvEl)];
        }
        for (int i = n - abs(prvEl); i < n; i++) {
            niza[i] = 0;
        }
    }

    return 0;
}

int main() {
    int M, brEl;
    int a[100];

    cin >> M;
    int niziSoNuli = 0;

    for (int i = 0; i < M; i++) {
        cin >> brEl;
        for (int j = 0; j < brEl; j++) {
            cin >> a[j];
        }

        niziSoNuli += transform(a, brEl);

        for (int j = 0; j < brEl; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }

    cout << niziSoNuli;

    return 0;
}
