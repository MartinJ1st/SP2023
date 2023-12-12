//Да се напише програма која што ќе ги избрише дупликатите од една низа. На крај, да се испечати на екран новодобиената низа. Елементите од низата се читаат од стандарден влез.
#include<iostream>

using namespace std;

int main() {
    int a[100], n, j, k, izbrisani = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - izbrisani; i++) {
        for (j = i + 1; j < n - izbrisani; j++) {
            if (a[i] == a[j]) {
                for (k = j; k < n - 1 - izbrisani; k++) {
                    a[k] = a[k + 1];
                }
                izbrisani++;
                --j;
            }
        }
    }
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (a[i] == a[j]) {
//                for (k = j; k < n - 1 - izbrisani; k++) {
//                    a[k] = a[k + 1];
//                }
//                n--;
//                j--;
//            }
//        }
//    }
    n -= izbrisani;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}