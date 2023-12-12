#include <iostream>
using namespace std;
int main () {
    int i = 11, sum = 0;
    while (i <= 97) {
        cout << i << " + ";
        sum = sum + i;
        i+=2;
    }
    sum = sum + i;
    cout << i << " = " << sum << endl;
    return 0;
}