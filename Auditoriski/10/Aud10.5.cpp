//Да се напише функција која ќе проверува дали дадена текстуална низа е палиндром.
//
//Една текстуална низа е палиндром ако таа се чита исто од лево на десно и од десно на лево.
//
//Примери за палиндроми
//
//dovod
//ana
//kalabalak

#include <iostream>
#include <cstring>

using namespace std;

int e_palindrom(char a[]) {
    for (int i = 0; i < strlen(a) / 2; i++)
        if (a[i] != a[strlen(a) - 1 - i])
            return 0;
    return 1;
}

// REKURZIVNO
int e_palindrom_rek(char a[], int n) {
    if (n < 0) return 1;
    if (*a != a[n]) { return 0; }
    return e_palindrom_rek(a + 1, n - 2);

}

int main() {
    char a[100];
    cin.getline(a, 100);

    cout << e_palindrom(a)<<endl;
    cout << e_palindrom_rek(a, strlen(a) - 1);
    return 0;
}