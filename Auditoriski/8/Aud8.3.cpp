////
//// Created by Media on 6.12.2023.
////
//aДа се напише програма која влезната низа a ќе ја трансформира во излезна низа b на следниот начин:
//b(indeks i)= a(indeks i)+a(indeks n-1-i)
//
//        Влезната низа 1 2 3 5 7 треба да се трансформира во 8 7 6 7 8.
//
//Објаснување: Бидејќи влезната низа a е со големина n, низата b ќе биде со иста големина. Трансформацијата се врши со
// парно собирање и замена на елементи. За секој пар елементи a[i] и a[n-1-i], каде што i се движи од [0 до n/2-1],
// нивниот збир е зачуван во b[i], додека a[i] се заменува со [n-1-i]. Ако n е непарен, средниот елемент a[n/2] се множи со 2.

#include <iostream>

using namespace std;


void transform(int arr[], int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        arr[i] += arr[j];
        arr[j] = arr[i];
    }

    if (n % 2) {
        arr[n / 2] *= 2;
    }
}

int main() {
    int n;
    int arr[100];

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    transform(arr, n);

    cout << "Transformed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}