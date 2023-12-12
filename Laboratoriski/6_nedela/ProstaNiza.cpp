//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int n, a[200], b[100];
//    bool flag = true;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//
//
//    for (int i = 0, k = 0; i <= n / 2; i++, k++) {
//        if (i == n / 2) {
//            if (n % 2 != 0) {
//                b[i] = a[n - 1];
//                continue;
//            }
//        }
//        b[i] = a[i + k] * 10 + a[i + 1 + k];
//    }
//
//    for (int i = 0; i <= n / 2; i++) {
//        flag = true;
//        for (int j = 2; j <= b[i] / 2; j++) {
//            if (b[i] % j == 0) {
//                flag = false;
//                break;
//            }
//        }
//        if (flag) { cout << "brojot " << b[i] << " e prost" << endl; }
//        else { cout << "brojot " << b[i] << " NE e prost" << endl; }
//    }
//    return 0;
//}

#include <iostream>

using namespace std;

bool isPrime(int el) {
    if (el < 2)
        return false;
    if (el == 3)
        return true;

    for (int i = 2; i <= el/2; i++) {
        if (el % i == 0)
            return false;
    }
    return true;
}

int main() {
    int i, n, nov, max = 100;
    int A[max];

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (i = 0; i < n - 1; i += 2) {
        nov = A[i] * 10 + A[i + 1];

        if (isPrime(nov)) {
            cout << "brojot " << nov << " e prost" << endl;
        } else {
            cout << "brojot " << nov << " NE e prost" << endl;
        }
    }

    if ((n % 2) && (isPrime(A[n - 1]))) {
        cout << "brojot " << A[n - 1] << " e prost" << endl;
    } else if (n % 2) {
        cout << "brojot " << A[n - 1] << " NE e prost" << endl;
    }

    return 0;
}
