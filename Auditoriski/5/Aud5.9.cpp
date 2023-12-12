/*Да се напише програма што од непознат број на цели броеви што се внесуваат од тастатура ќе ги определи двата броја со
 * најголеми вредности. Програмата завршува ако се внесе невалидна репрезентација на број.

пример
Ако се внесат броевите 2 4 7 4 2 1 8 6 9 7 10 3 програмата ќе отпечати 10 и 9.*/

#include <iostream>
using namespace std;

int main() {
    int n, max1, max2, temp;
    if (cin >> max1 >> max2) {
        if (max2 > max1){
            temp = max1;
            max1 = max2;
            max2 = temp;
        }
        while(cin >> n) {
            if(n > max1){
                max2 = max1;
                max1 = n;
            } else if (n > max2) {
                max2 = n;
            }
        }
        cout << max1 << endl;
        cout << max2 << endl;
    } else {
        cout << "Vnesete najmalku 2 broja";
    }
    return 0;
}