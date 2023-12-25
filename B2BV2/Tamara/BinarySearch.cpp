#include <iostream>

using namespace std;


int binarySearchRek(int arr[], int n, int target, int low, int high) {
    if (low > high) {
        return -1;
    }
    int middle = (low + high) / 2;
    if (arr[middle] == target)
        return middle;
    if (target < arr[middle]) {
        return binarySearchRek(arr, n, target, low, middle - 1);
    } else {
        return binarySearchRek(arr, n, target, middle + 1, high);
    }
}

int main() {

    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 11, 12};
    int target;
    cin >> target;

    int low = 0, high = 8;

    int indexTarget = binarySearchRek(arr, 9, target, low, high);
    cout << indexTarget;
    return 0;
}