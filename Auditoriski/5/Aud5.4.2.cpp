//Решение со do while:


#include <iostream>
using namespace std;

int main() {
    int n = 1, i = 0, number, div, r1, r2;
    div = r1 = r2 = 0; /* counters */
    cin >> n;   /* input numbers */
    do {
        cin >> number;
        if (number % 3 == 0)
            div++;
        else if (number % 3 == 1)
            r1++;
        else r2++;
        i++;
    } while (i < n);
    cout << div << endl;
    cout << r1 << endl;
    cout << r2 << endl;
    return 0;
}
