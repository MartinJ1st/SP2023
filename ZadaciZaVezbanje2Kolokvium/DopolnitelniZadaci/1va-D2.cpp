#include <iostream>
#include <cstring>

using namespace std;

int e_palindrom(char a[], int &br) {
    for (int i = 0; i < strlen(a) / 2; i++) {
        if (!isdigit(a[i]) && !isalpha(a[i])) {
            br++;
        }
        if (a[i] != a[strlen(a) - 1 - i])
            return 0;
    }
    return 1;
}

int main() {
    bool flag=false;
    int n, br;
    char a[80];
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        br = 0;
        cin.getline(a, 80);
        if (e_palindrom(a, br) && br) {
            for (int j = 0; j < strlen(a); ++j) {
                cout << a[j];
            }
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<"Nema!";
    }
    return 0;
}