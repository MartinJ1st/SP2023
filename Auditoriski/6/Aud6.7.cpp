//Да се напише програма што ќе ги отпечати сите парови прости броеви помали од 1000 што се
// разликуваат меѓу себе за 2. На крај да се отпечати и нивниот број.

#include <iostream>

using namespace std;

int prost(int n) {
    int i;
    for (i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int i, count = 0;
    for (i = 2; i < 998; ++i) {
        if (prost(i) && prost(i + 2)) {
            cout << "(" << i << ", " << i + 2 << ")" << endl;
            count++;
        }
    }
    cout << "Vkupno: " << count << endl;
    return 0;
}