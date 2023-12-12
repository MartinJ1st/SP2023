#include <iostream>

using namespace std;

int main() {
    int a[1000000];
    for (int i = 0; i < 1000000; ++i) {
        a[i] = i + 1;
    }
    int random;
    cin >> random;
//
//    for (int i = 0; i < 1000000; ++i) {
//        if (a[i] == random) {
//            cout << i;
//            break;
//        }
//    }

    int start = 0, end = 999999;
    while (1) {
        int mid = (start + end) / 2;
        if (a[mid] == random) {
            cout << mid << endl;
            break;
        } else if (a[mid] > random) {
            end = mid;
        } else {
            start = mid;
        }
    }
    return 0;
}