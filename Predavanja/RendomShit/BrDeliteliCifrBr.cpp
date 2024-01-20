#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int BrojCifri = 0;
        int Deliteli = 0;
        int tmp1 = n;
        while (tmp1) {
            BrojCifri++;
            tmp1 /= 10;
        }
        int tmp2 = n;
        if (n == 1) { cout << n; }
        else {
            for (int i = 1; i < tmp2; i++) {
                if (n % i == 0) {
                    tmp2 = n / i;
                    if (tmp2 != i) {
                        Deliteli++;
                    }
                    Deliteli++;
                }
            }
            if (Deliteli == BrojCifri) { cout << n<<endl; }

        }
    }
    return 0;
}
