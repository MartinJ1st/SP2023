// Без if-else
#include <iostream>
using namespace std;

int main() {
    int a, b, maks;
    cout << "Vnesi 2 broja: " << endl;
    cin >> a >> b;
    maks = (a > b) ? a : b;
    cout << "Maximum: " << maks;
    return 0;
}