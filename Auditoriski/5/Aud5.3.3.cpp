#include <iostream>
using namespace std;

int main() {
    int counter, n;
    float x, y;
    cout << "x: ";
    cin >> x;
    cout << "n: ";
    cin >> n;
    for(counter = 1, y = x; counter < n; counter++) {
        y *= x;
    }
    cout << x << "^" << n << " = " << y << endl;
    return 0;
}