//Да се напише програма за пресметување на сумата на сите парни двоцифрени броеви. Добиената сума се печати на екран.
#include <iostream>
using namespace std;
int main () {
    int i = 10, sum = 0;
    while (i <= 98) {
        sum = sum + i;
        i+=2;
    }
    cout << sum << endl;
    return 0;
}