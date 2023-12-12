//Да се пресмета збирот 1! + (1+2)! + (1+2+3)! + … + (1+2+…+n)! притоа: - користете рекурзивна функција
// за пресметување на збирот на првите k природни броеви. - користете рекурзивна функција за пресметување на
// факториел на еден природен број.

#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int sum(int k) {
    if (k == 0)
        return 0;
    else
        return k + sum(k - 1);
}

int main() {
    int i, n, result = 0;
    cin >> n;

    if (n > 0) {
        for (i = 1; i < n; i++) {
            int s = sum(i);
            result += factorial(s);
            cout << s << "! + ";
        }

        int s = sum(n);
        result += factorial(s);
        cout << s << "! = " << result << endl;
    } else {
        cout << "Wrong input" << endl;
    }

    return 0;
}