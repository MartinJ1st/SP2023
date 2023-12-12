#include <iostream>

using namespace std;

bool appears(int first, int second) {
    int kopijaSecond = second;
    while (first)
    {
        bool flag = false;
        int cifraPrv = first % 10;
        while (kopijaSecond)
        {
            int cifraVtor = kopijaSecond % 10;
            if (cifraVtor == cifraPrv) {
                flag = true;
                break;
            }
            kopijaSecond /= 10;
        }

        if (!flag) {
            return false;
        }
        kopijaSecond = second;
        first /= 10;
    }
    return true;
}

int main() {
    int nParovi, br1, br2;
    cin >> nParovi;
    for (int i = 0; i < nParovi; i++) {
        cin >> br1 >> br2;
        if (appears(br1, br2)) { cout << "YES" << endl; }
        else { cout << "NO" << endl; }
    }
}
