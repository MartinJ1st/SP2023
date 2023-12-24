#include <iostream>

using namespace std;

int broj_povtoruvanja(int a[], int n, int k) {
    if (n == 0) {
        return 0;
    }
    if (a[n - 1] == k) {
        return 1 + broj_povtoruvanja(a, n - 1, k);
    }
    return broj_povtoruvanja(a, n - 1, k);
}

int main() {

    int n, a[100], k;
    cin >> n;
    cin >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cout << a[i] << " ";
    }
    cout<<endl;
    int result = broj_povtoruvanja(a, n, k);
    cout << "Brojot " << k << " vo nizata se naogja " << result << " pati." << endl;

    return 0;
}