#include <iostream>

using namespace std;

int linearSearch(const int a[], int n, int el) {
    for (int i = 0; i < n; ++i) {
        if (a[i] == el) {
            cout<<i+1<<endl;
            return i;
        }
    }
    cout<<n<<endl;
    return -1;
}

int main() {
    int arr[7] = {2, 3, 4, 5, 6, 11, 0};
    int target;
    cin >> target;
    int index = linearSearch(arr, 7, target);
    if (index == -1) {
        cout << "Go nema vo ovaa niza" << endl;
    } else {
        cout << "Elementot " << target << " e na pozicija: " << index;
    }
//
//    bool flag = false;
//    for (int i = 0; i < 7; ++i) {
//        if (arr[i] == target) {
//            cout << "Elementot " << target << " e na pozicija: " << i;
//            flag = true;
//            break;
//        }
//    }
//
//    if (flag) {
//        cout << "Najdeno e" << endl;
//    } else {
//        cout << "Go nema vo ovaa niza" << endl;
//    }

    return 0;
}