//Да се напишат следните функции за пребарување во низа: • Линеарно пребарување • Бинарно пребарување Потоа да се напише
// главна програма во која ќе се пополнува низа со броевите од 1 до 1 000 000, а потоа се генерира случаен број во овој
// опсег чија што позиција треба да се пронајде со повикување на двете функции за пребарување.

//За двете функции избројте го и споредете го бројот на потребни итерации за пронаоѓање на бројот.

#include <iostream>
#include <cstdlib> // For rand()
#include <ctime> // For time()

using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int l, int r, int key) {
    if (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            return binarySearch(arr, mid + 1, r, key);
        } else {
            return binarySearch(arr, l, mid - 1, key);
        }
    }
    return -1;
}

int main() {
    // Initialize the array with numbers from 1 to 1,000,000
    int arr[1000001];
    for (int i = 0; i < 1000001; i++) {
        arr[i] = i + 1;
    }

    // Generate a random number within the range
    srand(time(NULL)); // Seed the random number generator
    int randomNum = 1 + rand() % 1000000; // Generate a random number between 1 and 1,000,000

    // Perform linear search
    int linearSearchIndex = linearSearch(arr, 1000001, randomNum);
    cout << "Linear search: " << linearSearchIndex << endl;

    // Perform binary search
    int binarySearchIndex = binarySearch(arr, 0, 1000000, randomNum);
    cout << "Binary search: " << binarySearchIndex << endl;

    return 0;
}