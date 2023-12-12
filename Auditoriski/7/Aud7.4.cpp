//Да се напише програма која ќе провери дали дадена низа од n елементи која се чита од стандарден влез е строго растечка, строго опаѓачка или ниту строго растечка ниту строго опаѓачка. Резултатот да се испечати на екран.
#include <iostream>

using namespace std;

int main() {
    int a[100], n;
    bool rastecka = true, opagjacka = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
// 1 NACIN
//    for (int i = 0; i < n - 1; i++) {
//        if (a[i] >= a[i + 1]) {
//            rastecka = false;
//            break;
//        }
//    }
//    for (int i = 0; i < n - 1; i++) {
//        if (a[i] <= a[i + 1]) {
//            opagjacka = false;
//            break;
//        }
//    }

// 2 NACIN
    for (int i = 0; i < n - 1; i++) {
        if (a[i] >= a[i + 1]) {
            rastecka = false;
        }
        if (a[i] <= a[i + 1]) {
            opagjacka = false;
        }
    }


    if (rastecka) { cout << "Rastecka" << endl; }
    else if (opagjacka) { cout << "Opagjacka" << endl; }
    else { cout << "Nitu rastecka nitu opagjacka" << endl; }
    return 0;
}