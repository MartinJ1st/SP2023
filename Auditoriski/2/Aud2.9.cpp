#include <iostream>
using namespace std;

//Да се напише програма која од СВ ќе прочита два цели броеви и ќе ја испечати на компјутерскиот екран нивната сума, разлика, производ и остатокот при делењето.

int main() {
    int x, y;
    cin >> x >> y;

    cout << x << " + " << y << " = " << x + y << endl;
    cout << x << " - " << y << " = " << x - y << endl;
    cout << x << " * " << y << " = " << x * y << endl;
    cout << x << " % " << y << " = " << x % y << endl;
    return 0;
}