//Да се напише програма која за дадена низа од цели броеви (која се внесува од тастатура), ќе го отпечати најмалиот заеднички содржател (НЗС) на нејзините елементи. Програмата треба задолжително да содржи рекурзивна функција за пресметување НЗС на два броја.
//
//Пример: За низата 18 12 24 36 6 на екран треба да се отпечати:
//
//NZS na elementite na ovaa niza e 72


#include <iostream>

using namespace std;

int nzd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int nzs_recursive(int a, int b) {
    return a * b / nzd(a, b);
}

int nzs_array_recursive(const int a[], int size, int i) {
    if (i == size - 1) {
        return a[i];
    } else {
        return nzs_recursive(a[i], nzs_array_recursive(a, size, i + 1));
    }
}

int main() {
    int n;
    cin >> n;
    int niza[n];

    for (int i = 0; i < n; ++i) {
        cin >> niza[i];
    }

    int result = nzs_array_recursive(niza, n, 0);
    cout << "NZS na elementite na ovaa niza e " << result << endl;

    return 0;
}
