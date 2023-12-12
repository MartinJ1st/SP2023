/*Да се напише програма што од непознат број на цели броеви
 * што се внесуваат од тастатура ќе го определи бројот со максимална
 * вредност. Притоа, броевите поголеми од 100 не се земаат предвид т.е.
 * се игнорираат. Програмата завршува ако се внесе невалидна
 * репрезентација на број.
*/

#include <iostream>
using namespace std;

int main() {
    int n, max;
    bool zname = false;
       while (cin >> n) {
           if(zname==false && n<100)
           {
           max=n;
           zname = true;
           }
           if (max < n && n<100)
           {
                max = n;
           }
        }
       if(zname)
           cout << max<<endl;

    return 0;
}