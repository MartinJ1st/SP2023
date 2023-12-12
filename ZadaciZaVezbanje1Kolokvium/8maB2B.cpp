//Од стандарден влез се внесуваат два цели броја N и Х.
//
//Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
//
//Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
//
//Задачата да се реши без употреба на низи и матрици.

#include <iostream>

using namespace std;

int main() {

    int n, x;
    cin >> n >> x;
    n--;

    while (n) {

        int tmpN = n, tmpX = x, flag = 1;
        while (tmpN) {
            while (tmpX) {
                if (tmpX % 10 == tmpN % 10) {
                    flag = 0;
                    break;
                }
                tmpX /= 10;
            }
            tmpN /= 10;
            tmpX = x;
        }
        if (flag) {
            cout << n;
            break;
        }
        n--;
    }

    return 0;
}