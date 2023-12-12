//Да се напише програма која за дадена низа од цели броеви (која што се внесува од тастатура) ќе го отпечати збирот на
// елементи од низата. Програмата треба да содржи рекурзивна функција за наоѓање на збирот на елементите во дадена низа.


#include <iostream>
using namespace std;

int sum_elements(int array[], int n);

int main() {
    int i, n, a[100];

    cin >> n;

    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "The sum of all of the array elements is: " << sum_elements(a, n - 1) << endl;

    return 0;
}

int sum_elements(int array[], int n) {
    if (n == 0) {
        return array[n];
    } else {
        return array[n] + sum_elements(array, n - 1);
    }
}