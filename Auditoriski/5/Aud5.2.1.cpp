/*Да се напише програма за пресметување на сумата на сите непарни двоцифрени броеви. Програмата ја печати сумата на екран во следниот формат:

11 + 13 + 15 + 17 + … + 97 + 99 = 2475

Програмата да се реши без користење на наредбата if*/
#include <iostream>
using namespace std;
int main () {
    int i = 11, sum = 0;
    cout << i;
    sum = i;
    i=i+2;
    while (i <= 99){
        cout << " + " << i;
        sum = sum + i;
        i+=2;
    }
    cout << " = " << sum << endl;
    return 0;
}