#include <iostream>
using namespace std;
int main() {
    int m = 5, n = 10;
    if (m > n)
        ++m;
    ++n;
    cout << "m = " << m << ", n = " << n;
    return 0;
}