//Да се напише програма во која со посебна функција се пресметува куб n^3
// за вчитан природен број n.

#include <iostream>
using namespace std;

double kub(int x) {
    return x * x * x;
}

int main() {
    int n;
    cout << "Vnesete eden priroden broj: ";
    cin >> n;
    double rezultat = kub(n);

    cout << "Kubot na brojot " << n << " e " << rezultat << endl;
    return 0;
}
