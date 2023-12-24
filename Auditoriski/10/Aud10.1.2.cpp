#include <iostream>
//#include <cstring>
using namespace std;

int izbrojZnakRec(char a[], char znak) {
    if (*a == '\0') {
        return 0;
    }

    return (*a == znak) + izbrojZnakRec(a + 1, znak);
}

//      Iterativno
int izbrojZnakIt(char a[], char znak) {
    int pojavuvanja = 0;
//    for (int i = 0; i < strlen(a); ++i) {
//
//    }
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == znak)
            pojavuvanja++;
    }
    return pojavuvanja;
}

int main() {
    char a[100];
    char znak;
    cin.getline(a, 100);
//  fgets(a,100,stdin);
//  cin>>a; Ako treba da se procita zbor bez prazno mesto ILI string
    cin >> znak;
    cout << izbrojZnakIt(a, znak) << endl;
    cout << izbrojZnakRec(a, znak) << endl;

}