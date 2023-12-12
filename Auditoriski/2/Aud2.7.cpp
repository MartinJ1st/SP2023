#include <iostream>
using namespace std;

//Да се напише програма која ќе ги отпечати на екран остатоците при делењето на бројот 19 со 2, 3, 5 и 8.

int main() {
    int a = 19;
    cout << "Ostatokot pri delenje na 19 so 2 e: " << a % 2 << endl;
    cout << "Ostatokot pri delenje na 19 so 3 e: " << a % 3 << endl;
    cout << "Ostatokot pri delenje na 19 so 5 e: " << a % 5 << endl;
    cout << "Ostatokot pri delenje na 19 so 8 e: " << a % 8 << endl;
    return 0;
}
