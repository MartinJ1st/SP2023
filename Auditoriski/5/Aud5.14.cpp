/*Да се напише програма што ќе претставува едноставен калкулатор. Во програмата се вчитуваат два броја и оператор во формат:

broj1 operator broj2

По извршената операција во зависност од операторот, се печати резултатот во формат:

broj1 operator broj2 = rezultat*/

#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2, result = 0;
    cout << "num1 operator num2" << endl;
    cin >> num1 >> op >> num2;
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Delenje so 0" << endl;
            } else {
                result = num1 / num2;
            }
            break;
        default:
            cout << "Nepoznat operator " << op << endl;
            break;
    }
    if (result) cout << num1 << " " << op << " " << num2 << " = " << result;
    return 0;
}