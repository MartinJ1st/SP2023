#include <iostream>

using namespace std;


int main() {
    int a[100], n, bP = 0, bN = 0, zP = 0, zN = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            bP++;
            zP += a[i];
        } else {
            bN++;
            zN += a[i];
        }
    }

    cout << "Zbir parni: " << zP << endl;
    cout << "Zbir neparni: " << zN << endl;
    cout << "Odnos: " << (float) bP / (float) bN << endl;
    return 0;

}