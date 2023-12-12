//Да се напишат фунции за сортирање на низа со помош на следните методи за сортирање: - Метод на меурче (Bubble sort) -
// Метод со избор на елемент (Selection sort) - Метод со вметнување (Insertion sort) Да се напишат функции за внесување
// и печатење на елементите на една низа и да се напише главна програма во која се тестираат сите методи за сортирање
//


#include <iostream>

using namespace std;


//Reference vs. without reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void inputArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int array[], int size) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < size - 1; i++) {
            if (array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]);
                swapped = true;
            }
        }
    }
}

void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        swap(array[i], array[minIndex]);
    }
}

void insertionSort(int niza[], int size) {
    for (int i = 1; i < size; i++) {
        int key = niza[i];
        int j = i - 1;
        while (j >= 0 && niza[j] > key) {
            niza[j + 1] = niza[j];
            j--;
        }
        niza[j + 1] = key;
    }
}

int main() {
    int size;
    cin >> size;

    int array[size];
    inputArray(array, size);
    //Original array
    printArray(array, size);

    bubbleSort(array, size);
    //Bubble sort
    printArray(array, size);

    selectionSort(array, size);
    //Selection sort
    printArray(array, size);

    insertionSort(array, size);
    //insertion sort
    printArray(array, size);

    return 0;
}