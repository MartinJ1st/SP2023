#include <iostream>
using namespace std;

/* Да се напише програма која ќе чита два цели броеви (x, y) од тастатура и на компјутерскиот екран ќе го испечати резултатот (z) од следниот израз
z = x++ + --y + (x<y)
Каква вредност ќе има z за x = 1, y = 2? */

int main()
{
    int x, y, z;
    cout << "Vnesete x i y, soodvetno: ";
    cin >> x >> y;
    z = (x++) + (--y) + (x < y);
    //r=(x<y || y<z++) - za z=3, na kraj ke dade tocno
    //r=(x<y && y<z++) - za z=3, na kraj ke dade netocno
    //
    cout << z;
    return 0;
}
